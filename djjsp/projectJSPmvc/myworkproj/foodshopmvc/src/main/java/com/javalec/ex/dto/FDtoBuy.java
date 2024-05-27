package com.javalec.ex.dto;

import java.sql.Timestamp;

public class FDtoBuy {
	private String buyId;
	private String buyer;
	private int foodId;
	private String foodName;
	private int buyPrice;
	private int buyCount;
	private String foodImage;
	private Timestamp buyDate;
	private String deliveryAddress;
	
	public String getBuyId() {
		return buyId;
	}
	public void setBuyId(String buyId) {
		this.buyId = buyId;
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
	public Timestamp getBuyDate() {
		return buyDate;
	}
	public void setBuyDate(Timestamp buyDate) {
		this.buyDate = buyDate;
	}
	public String getDeliveryAddress() {
		return deliveryAddress;
	}
	public void setDeliveryAddress(String deliveryAddress) {
		this.deliveryAddress = deliveryAddress;
	}
	public FDtoBuy(String buyId, String buyer, int foodId, String foodName, int buyPrice, int buyCount, String foodImage,
			Timestamp buyDate, String deliveryAddress) {
		this.buyId = buyId;
		this.buyer = buyer;
		this.foodId = foodId;
		this.foodName = foodName;
		this.buyPrice = buyPrice;
		this.buyCount = buyCount;
		this.foodImage = foodImage;
		this.buyDate = buyDate;
		this.deliveryAddress = deliveryAddress;
	}
	
	

}
