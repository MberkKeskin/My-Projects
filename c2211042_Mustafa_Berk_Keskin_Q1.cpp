#include <iostream>
#include <string>
using namespace std;


int main() {
	double hourlyWage=0, workHour=0,wage=0,overTime=0,overTimePay=0,bonusPay=0,regularPay=0,flag=1;
	string name;
	
	cout << "Enter worker name: ";
	getline(cin, name);
	cout << "Worker Name:  "<< name << endl << "Enter hourly wage:";
	cin >> hourlyWage;
	cout <<"Enter work hour for worker:";
	cin >> workHour;
	
	
	overTime=workHour-45;
	
	if( workHour>55){
		
		overTimePay=(hourlyWage * 1.2) *overTime;
		bonusPay=(workHour-55)* hourlyWage;
		regularPay=45*hourlyWage;
		wage=regularPay+overTimePay+bonusPay;
		flag=0;
	} 
	
	else if(workHour>45 ){
		overTimePay=(hourlyWage * 1.2) *overTime;
		regularPay=45*hourlyWage;
		wage=regularPay+overTimePay;
		flag=0;	
	}
	
	else if(workHour<=45 && workHour!=0){
		wage=workHour*hourlyWage;
		regularPay=wage;
		overTime=0;
	}
	
	else if(workHour==0){
		printf("This worken on leave");
		return 0;
	}
	

	
	cout<<"Regular Pay: $"<<regularPay<<endl;
	cout<<"overtime Hours: "<<overTime<<" hours"<<endl;
	cout<<"overtime Pay: $"<<overTimePay<<endl;
	cout<<"Bonus Pay: $"<<bonusPay<<endl;
	cout<<"wage: $"<<wage<<endl;

	
	
	
	
	
	return 0;
}
