function checkForm(writeform){

	if(!writeform.food_kind.value){
	  alert("음식의 분류를 선택하십시오");
	  writeform.food_kind.focus();
	  return false;
	}
	if(!writeform.food_name.value){
	  alert("음식의 이름을 입력하십시오");
	  writeform.food_name.focus();
	  return false;
	}
	
	if(!writeform.food_price.value){
	  alert("음식의 가격을 입력하십시오");
	  writeform.food_price.focus();
	  return false;
	}
        
	if(!writeform.food_count.value){
	  alert("음식의 수량을 입력하십시오");
	  writeform.food_count.focus();
	  return false;
	}
		
	writeform.action = "foodRegister.do";
    writeform.submit();
	
 } 
 
 function updateCheckForm(updateForm){

	if(!updateForm.food_kind.value){
	  alert("음식의 분류를 선택하십시오");
	  updateForm.food_kind.focus();
	  return false;
	}
	if(!updateForm.food_name.value){
	  alert("음식의 이름을 입력하십시오");
	  updateForm.food_name.focus();
	  return false;
	}
	
	if(!updateForm.food_price.value){
	  alert("음식의 가격을 입력하십시오");
	  updateForm.food_price.focus();
	  return false;
	}
        
	if(!updateForm.food_count.value){
	  alert("음식의 수량을 입력하십시오");
	  updateForm.food_count.focus();
	  return false;
	}
		
	updateForm.action = "foodUpdate.do";
    updateForm.submit();
	
 } 
 