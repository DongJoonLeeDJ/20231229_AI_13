package com.javalec.ex.dto;

public class FDtoCart {
	private int cartId;
	private String buyer;

	private int foodId;
	private String foodName;
	private int buyPrice;
	private int buyCount;
	private String foodImage;
	private String foodKind;
	public String getFoodKind() {
		return foodKind;
	}
	public void setFoodKind(String foodKind) {
		this.foodKind = foodKind;
	}
	public int getCartId() {
		return cartId;
	}
	public void setCartId(int cartId) {
		this.cartId = cartId;
	}
	public String getBuyer() {
		return buyer;
	}
	public void setBuyer(String buyer) {
		this.buyer = buyer;
	}
	public int getFoodId() {
		return foodId;
	}
	public void setFoodId(int foodId) {
		this.foodId = foodId;
	}
	public String getFoodName() {
		return foodName;
	}
	public void setFoodName(String foodName) {
		this.foodName = foodName;
	}
	public int getBuyPrice() {
		return buyPrice;
	}
	public void setBuyPrice(int buyPrice) {
		this.buyPrice = buyPrice;
	}
	public int getBuyCount() {
		return buyCount;
	}
	public void setBuyCount(int buyCount) {
		this.buyCount = buyCount;
	}
	public String getFoodImage() {
		return foodImage;
	}
	public void setFoodImage(String foodImage) {
		this.foodImage = foodImage;
	}
	public FDtoCart(String buyer, int foodId, String foodName, int buyPrice, int buyCount,
			String foodImage) {
		this.buyer = buyer;
		this.foodId = foodId;
		this.foodName = foodName;
		this.buyPrice = buyPrice;
		this.buyCount = buyCount;
		this.foodImage = foodImage;
	}
	public FDtoCart(String buyer, int foodId, String foodName, int buyPrice, int buyCount,
			String foodImage, String foodKind) {
		this.buyer = buyer;
		this.foodId = foodId;
		this.foodName = foodName;
		this.buyPrice = buyPrice;
		this.buyCount = buyCount;
		this.foodImage = foodImage;
		this.foodKind = foodKind;
	}
	
	public FDtoCart(int cartId, String buyer, int foodId, String foodName, int buyPrice, int buyCount,
			String foodImage, String foodKind) {
		this.cartId = cartId;
		this.buyer = buyer;
		this.foodId = foodId;
		this.foodName = foodName;
		this.buyPrice = buyPrice;
		this.buyCount = buyCount;
		this.foodImage = foodImage;
		this.foodKind = foodKind;
	}
	

}
