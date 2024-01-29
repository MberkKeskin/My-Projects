#include <iostream>

using namespace std;

double calculateArea(int side){
	double area;
	area=side*side;
	return area;
}

double calculateArea(double side,double height){
	double area;
	area=(side*height)/2;
	return area;
}

double calculateArea(double radius){
	double area,pi=3.14;	
	area=pi*(radius*radius);
	return area;
}

double calculateArea(int lenght,int side){
	double area;
	area=lenght*side;
	return area;
}


int main() {
	int chooice;
	double area;
	
	cout << "1.Square, 2.ractangle, 3.Circle, 4.Triangle" << endl;
	cout << "Chooice a shape to calculate area:";
	cin >> chooice;
	
	switch(chooice){
		case 1:
			int side;
			cout << "Enter side lenght:";
			cin >> side;
			
			cout <<endl;
			
			area=calculateArea(side);
			break;
			
		case 2:
			int wide, sideForRectangle;
			cout << "Enter side lenght:";
			cin >> sideForRectangle;
			cout << "Enter wide lenght:";
			cin >> wide;
			
			cout <<endl;
			
			area=calculateArea(wide,sideForRectangle);
			break;
			
		case 3:
			double radius;
			cout << "Enter radius:";
			cin >> radius;
			
			cout <<endl;
			
			area=calculateArea(radius);
			break;
			
			
		case 4:
			double height,sideForTraiangle;
			cout << "Enter height lenght:";
			cin >> height;
			cout << "Enter side lenght:";
			cin >> sideForTraiangle;
			
			cout <<endl;
			
			area=calculateArea(sideForTraiangle,height);
			break;		
	}
	
	cout << "Your area is:" << area << endl;
			
			
	return 0;
}
