package com.mvcspring.dev;

import java.util.List;
import java.util.Map;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.servlet.ModelAndView;

//@~~~ 
//@Override
@Controller
public class BookController {

	@Autowired
	BookService bookService;

	// @GetMapping(value="/create") == @RequestMapping(value="/create", method =
	// RequestMethod.GET)
	// @GetMapping(value="/create")
	@RequestMapping(value = "/create", method = RequestMethod.GET)
	public ModelAndView create() {
		// ModelAndView = Model�� View�� ���� ����
		// Model = �����Ͱ� ��� ����
		// View = ȭ�� ����(jsp ���� ���)
		return new ModelAndView("book/create");
	}

	@RequestMapping(value = "/create", method = RequestMethod.POST)
	public ModelAndView createPost(@RequestParam Map<String, Object> map) {
		// map�� ��� ���� title, category, price
		ModelAndView mav = new ModelAndView();

		String bookId = this.bookService.create(map);
		if (bookId == null) {
			mav.setViewName("redirect:/create");
		} else {
			mav.setViewName("redirect:/detail?bookId=" + bookId);
		}
		return mav;
	}

	// @RequestMapping(value = "/detail", method = RequestMethod.GET)
	@GetMapping(value = "/detail")
	public ModelAndView detail(@RequestParam Map<String, Object> map) {
		Map<String, Object> detailMap = this.bookService.detail(map);

		ModelAndView mav = new ModelAndView();
		mav.addObject("data", detailMap);
		String bookId = map.get("bookId").toString();
		mav.addObject("bookId", bookId);
		mav.setViewName("/book/detail");
		return mav;
	}

	@RequestMapping(value = "/update", method = RequestMethod.GET)
	public ModelAndView update(@RequestParam Map<String, Object> map) {
		Map<String, Object> detailMap = this.bookService.detail(map);

		ModelAndView mav = new ModelAndView();
		mav.addObject("data", detailMap);
		mav.setViewName("/book/update");
		return mav;
	}

	// @RequestMapping(value = "update", method = RequestMethod.POST)
	@PostMapping(value = "update")
	public ModelAndView updatePost(@RequestParam Map<String, Object> map) {
		ModelAndView mav = new ModelAndView();

		boolean isUpdateSuccess = this.bookService.edit(map);
		if (isUpdateSuccess) {
			String bookId = map.get("bookId").toString();
			mav.setViewName("redirect:/detail?bookId=" + bookId);
		} else {
			mav = this.update(map);
		}

		return mav;
	}

	@RequestMapping(value = "/delete", method = RequestMethod.POST)
	public ModelAndView deletePost(@RequestParam Map<String, Object> map) {
		ModelAndView mav = new ModelAndView();

		boolean isDeleteSuccess = this.bookService.remove(map);
		if (isDeleteSuccess) {
			mav.setViewName("redirect:/list");
		} else {
			String bookId = map.get("bookId").toString();
			mav.setViewName("redirect:/detail?bookId=" + bookId);
		}

		return mav;
	}

	@RequestMapping(value = "list")
	//public ModelAndView list(@RequestParam Map<String, Object> map) {
	public ModelAndView list(@RequestParam Map<String,Object> map, @RequestParam(value="nowPage", required=false) String nowPage) {

		//// ���� �߰��� �ڵ�1 ////
		double CNT = 2.0; //�� ���� �������� ������ �ǹ�(�ؿ� ����)
		int LIMITCOUNT = (int)CNT;
		if(nowPage!=null) {
			int now = Integer.parseInt(nowPage);
			int skipCount=0;
			if(now>1)
				skipCount = (now-1)*LIMITCOUNT;
			map.put("skipCount", skipCount);
		} else {
			map.put("skipCount",0);
		}
		//// ���� �߰��� �ڵ�1 ////
		
		
		List<Map<String, Object>> list = this.bookService.list(map);

		ModelAndView mav = new ModelAndView();
		mav.addObject("data", list);
		
		//// ���� �߰��� �ڵ�2 ////
		int totalCount = 
				(int)Math.ceil
				(this.bookService.countBookBoard(map)/CNT);
				//ceil : �ø�
		mav.addObject("totalCount", totalCount);//�� �� ������ ����
		
		int nowPos = nowPage==null?1:Integer.parseInt(nowPage);
		if(nowPos<=0)
			nowPos=1;
		mav.addObject("nowPage",nowPos);
		
		int endPage = (int)(Math.ceil(nowPos/CNT)*(LIMITCOUNT));
		int startPage = 0;
		if(endPage>totalCount) { //�� �κ�
			startPage = endPage-(LIMITCOUNT)+1;
			endPage=totalCount;
		} else {
			startPage = endPage-(LIMITCOUNT)+1;
		}
		if(startPage<=0)
			startPage=1;
		
		mav.addObject("startPage", startPage);
		mav.addObject("endPage", endPage);
		
		//�˻��� �Ķ���� �� �߰���
		//�˻� �ƹ� �͵� �Է� �� �ϸ� ������ ��Ϻ��� ó�� ����
		if(map.containsKey("keyword"))
			mav.addObject("keyword", map.get("keyword"));		
		//// ���� �߰��� �ڵ�2 ////		
		
		
		mav.setViewName("/book/list");
		return mav;
	}

}
