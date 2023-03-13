#include <iostream>
using namespace std;

class Car 
{
	int yearModel;
	string make;
	int speed;
	
	public:
	Car(int y, string m) 
	{
		yearModel = y;
		make = m;
		speed = 0;
	}
	
	int getYearModel() {
		return yearModel;
	}
	
	string getMake() {
		return make;
	}
	
	int getSpeed() {
		return speed;
	}
	
	void accelerate() {
		speed += 5;
	}
	
	void brake() {
		speed -= 5;
	}

};

int main() {
	Car car = Car(2023, "Toyota");
	for(int i = 1; i<= 5;i++) {
		car.accelerate();
		cout << "Current speed after acceleration " << i << ": " << car.getSpeed() << endl;
	}
	
	for(int i=1; i<= 5; i++) {
		car.brake();
		cout << "Current speed after braking " << i << ": " << car.getSpeed() << endl;
	}
	return 0;
}
