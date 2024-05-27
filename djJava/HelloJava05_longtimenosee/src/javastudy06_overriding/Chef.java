package javastudy06_overriding;

public class Chef {
	
	private String name;
	private String mainMenu;
	private String CodeNum;
	
	public void taste() {
		System.out.println(mainMenu+" 요리를 맛 봅니다.");
	}
	
	public void cook() {
		System.out.println(mainMenu+" 요리를 합니다...");
	}
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getMainMenu() {
		return mainMenu;
	}
	public void setMainMenu(String mainMenu) {
		this.mainMenu = mainMenu;
	}
	public String getCodeNum() {
		return CodeNum;
	}
	public void setCodeNum(String codeNum) {
		CodeNum = codeNum;
	}
	
	

}
