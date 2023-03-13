#include <iostream>
#include<string>
using namespace std;

class RetailItem 
{
	string description;
	int unitsOnhand;
	double price;
public:	
	RetailItem(string d, int u, double p) 
	{
		description = d;
		unitsOnhand = u;
		price = p;
	}
	
	void setDescription(string d) {
		description = d;
	}
	
	void setUnitsOnhand(int u) {
		unitsOnhand = u;
	}
	
	void setPrice(double p) {
		price = p;
	}
	
	string getDescription() {
		return description;
	}
	
	int getUnitsOnHand() {
		return unitsOnhand;
	}
	
	double getPrice() {
		return price;
	}
};

int main() {
	RetailItem item1 = RetailItem("Jacket", 12, 59.95);
    RetailItem item2 = RetailItem("Designer Jeans", 40, 34.95);
    RetailItem item3 = RetailItem("Shirt", 20, 24.95);
    cout << "-------------------------------------------------------------"<<endl;
	cout <<"\t\t"<<"description\t\t"<<"unitsOnhand\t"<<"price\t"<<endl;
	cout << "-------------------------------------------------------------"<<endl;
    cout <<"Item #1\t\t"<<item1.getDescription()<<"\t\t\t"<<item1.getUnitsOnHand()<<"\t\t"<<item1.getPrice()<<endl;
    cout <<"Item #2\t\t"<<item2.getDescription()<<"\t\t"<<item2.getUnitsOnHand()<<"\t\t"<<item2.getPrice()<<endl;
    cout <<"Item #3\t\t"<<item3.getDescription()<<"\t\t\t"<<item3.getUnitsOnHand()<<"\t\t"<<item3.getPrice()<<endl;
	cout << "-------------------------------------------------------------"<<endl;
		
}
