#include <iostream>



using namespace std;

class Car {
public:
	string model;
	string color;
	int initialSpeed ;

	void showCarDetails();
	Car(string modelName, string colorName, int speed);
	string getModelName();
	string getColorName();
	int getSpeed();
	~Car();
}; 
void Car::showCarDetails() {
	cout << "Model: " << Car::model << endl;
	cout << "Color: " << Car::color << endl;
	cout <<"initial Speed " << Car::initialSpeed << endl; 


}

Car::Car(string modelName, string colorName, int speed) {
	model = modelName;
	color = colorName;
	initialSpeed = speed;

	cout << "Model name: "<< model;
	cout << "Color name: "<< color;
	cout << "First speed (km/h): "<< initialSpeed;
	

}
Car::~Car() {
	cout << "The car has been destroyed";
}
string Car::getModelName() {
	string modelName;
	cout << "Enter model name:";
	cin >> modelName;
	cout << endl;
	return modelName;
}
string Car::getColorName() {
	string colorName;
	cout << "Enter color name:";
	cin >> colorName;
	cout << endl;
	return colorName;
}
int Car::getSpeed() {
	int speed;
	cout << "Enter speed:";
	cin >> speed;
	cout << endl;
	return speed;

	cout << "car has been created" << endl;


}



int main() {
	int chooice = 1, acclereate = 0, decceralte = 0;
	Car otomobil1(" "," ",0);
	cout << endl;

	otomobil1.model=otomobil1.getModelName();
	otomobil1.color = otomobil1.getColorName();
	otomobil1.initialSpeed = otomobil1.getSpeed();

	cout << "Car Actions:" << endl;
	cout << "1.Start" << endl;
	cout << "2.Stop" << endl;
	cout << "3.Accelerate" << endl;
	cout << "4.Deceralte" << endl;
	cout << "5.Show deatils" << endl;
	cout << "0.Exit:" << endl;

	while(chooice !=0){
		cout << "please enter your chooice:" << endl;
		cin >> chooice;

		switch (chooice) {
		case 1:
			if (otomobil1.initialSpeed > 0) {
				cout << "Car has been started";
				cout << endl;
			}

			else {
				cout << "The speed is zero this car cannot operate" << endl;
				otomobil1.initialSpeed = otomobil1.getSpeed();
				cout << " Your speed is " << otomobil1.initialSpeed << endl;
			}
			break;

		case 2:
			otomobil1.initialSpeed = 0;
			cout << "Car has been stopped" << endl;
			break;

		case 3:
			cout << "Enter speed to fast (km/h):" << endl;
			cin >> acclereate;
			otomobil1.initialSpeed = otomobil1.initialSpeed + acclereate;
			cout << " Your speed is " << otomobil1.initialSpeed << endl;
			break;

		case 4:
			cout << "Enter speed to slow (km/h):" << endl;
			cin >> decceralte ;
			otomobil1.initialSpeed = otomobil1.initialSpeed - decceralte ;
			cout << " Your speed is " << otomobil1.initialSpeed << endl;
			break;
		
		case 5:
			otomobil1.showCarDetails();
			cout << endl;
			break;
	
		case 0:

			chooice = 0;
			break;
		}
	}

	cout << "Exiting...";
	cout << endl;


	return 0;

	
}

