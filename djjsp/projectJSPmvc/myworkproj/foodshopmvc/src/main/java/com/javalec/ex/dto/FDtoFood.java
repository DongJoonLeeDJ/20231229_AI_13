package com.javalec.ex.dto;

public class FDtoFood {
	private int foodId;
	private String foodKind;
	private String foodName;
	private int foodPrice;
	private int foodCount;
	private String foodImage;
	private String foodKindName; //음식 분류를 테이블로 처리함
	public String getFoodKindName() {
		return foodKindName;
	}
	public void setFoodKindName(String foodKindName) {
		this.foodKindName = foodKindName;
	}
	public int getFoodId() {
		return foodId;
	}
	public void setFoodId(int foodId) {
		this.foodId = foodId;
	}
	public String getFoodKind() {
		return foodKind;
	}
	public void setFoodKind(String foodKind) {
		this.foodKind = foodKind;
	}
	public String getFoodName() {
		return foodName;
	}
	public void setFoodName(String foodName) {
		this.foodName = foodName;
	}
	public int getFoodPrice() {
		return foodPrice;
	}
	public void setFoodPrice(int foodPrice) {
		this.foodPrice = foodPrice;
	}
	public int getFoodCount() {
		return foodCount;
	}
	public void setFoodCount(int foodCount) {
		this.foodCount = foodCount;
	}
	public String getFoodImage() {
		return foodImage;
	}
	public void setFoodImage(String foodImage) {
		this.foodImage = foodImage;
	}
	public FDtoFood(int foodId, String foodKind, String foodName, int foodPrice, int foodCount, String foodImage) {
		this.foodId = foodId;
		this.foodKind = foodKind;
		this.foodName = foodName;
		this.foodPrice = foodPrice;
		this.foodCount = foodCount;
		this.foodImage = foodImage;
	}

	public FDtoFood(int foodId, String foodKind, String foodName, int foodPrice, int foodCount, String foodImage, String foodKindName) {
		this.foodId = foodId;
		this.foodKind = foodKind;
		this.foodName = foodName;
		this.foodPrice = foodPrice;
		this.foodCount = foodCount;
		this.foodImage = foodImage;
		this.foodKindName = foodKindName;
	}

}
