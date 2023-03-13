#include <iostream>
using namespace std;
class Inventory 
{
	int itemNumber;
	int quantity;
	double cost;
	double totalCost;
public:	
	Inventory() 
	{
		itemNumber=0;
		quantity=0;
		cost=0;
		totalCost=0.0;
	}
	
	Inventory(int itemNumber, double cost, int quantity) 
	{
		setItemNumber(itemNumber);
        setCost(cost);
        setQuantity(quantity);
		setTotalCost();
	}
	
	void setItemNumber(int i) {
		if(i >= 0) {
			itemNumber = i;
		}else {
			cout << "Error: item number cannot be negative." << endl;
		}
		
	}
	
	void setQuantity(int q) {
		if(q >= 0) {
			quantity = q;
		}else {
			 cout << "Error: quantity cannot be negative." << endl;
		}
		
	} 
	
	void setCost(double c) {
		if(c >= 0) {
			cost = c;
		}else {
			cout << "Error: cost cannot be negative." << endl;
		}
		
	}
	
	void setTotalCost() {
		totalCost = quantity * cost;
	}
	
	int getItemNumber() {
		return itemNumber;
	}
	
	int getQuantity() {
		return quantity;
	}
	
	double getCost() {
		return cost;
	}
	
	double getTotalCost() {
		return totalCost;
	}
	 
};

int main() {
    Inventory item1(1, 10, 50.5);
    
    cout << "Item Number: " << item1.getItemNumber() << endl;
    cout << "Quantity: " << item1.getQuantity() << endl;
    cout << "Cost: " << item1.getCost() << endl;
    cout << "Total Cost: " << item1.getTotalCost() << endl;
}
