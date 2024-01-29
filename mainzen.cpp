#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct machine{
	string name;
	int lifeTime;
	int totalUsage;
};

void machineList(struct machine machine,int flag){
	int newMachineRequried;
	string newMachine;
	newMachineRequried=machine.lifeTime-machine.totalUsage;
	
	if(newMachineRequried<=5){
		newMachine="Requrired";
	}else{
		newMachine="Not requried";
	}
	if(flag){
	cout <<left << setw(10)<<"Machine" <<left<<setw(15)<< "Life Time" <<left <<setw(15)<< "Total usage" <<left <<setw(10)<< "New machine Requirement"<<endl;
	cout <<"-------------------------------------------------------------------------------------"<<endl;
    }
	cout <<left << setw(10)<< machine.name <<left<<setw(15)<< machine.lifeTime <<left <<setw(15)<< machine.totalUsage<<left <<setw(10)<<newMachine;
}




int main() {
	struct machine makina1,makina2,makina3;
	int counter=1,flagForMenu=1;
	
	cout <<"Enter the information for machine:"<<counter<<endl;
	cout << "Enter name:";
	getline(cin,makina1.name);
	cout << "Enter Life time:";
	cin >> makina1.lifeTime;
	cout << "Enter Total Usage:";
	cin >> makina1.totalUsage;
	counter++;
	cin.ignore();
	cout<<endl;
	
	
	cout <<"Enter the information for machine:"<<counter<<endl;
	cout << "Enter name:";
	getline(cin,makina2.name);
	cout << "Enter Life time:";
	cin >> makina2.lifeTime;
	cout << "Enter Total Usage:";
	cin >> makina2.totalUsage;
	counter++;
	cin.ignore();
	cout<<endl;

	
	cout <<"Enter the information for machine:"<<counter<<endl;
	cout << "Enter name:";
	getline(cin,makina3.name);
	cout << "Enter Life time:";
	cin >> makina3.lifeTime;
	cout << "Enter Total Usage:";
	cin >> makina3.totalUsage;

	machineList(makina1,flagForMenu);
	flagForMenu=0;
	cout<< endl;
	machineList(makina2,flagForMenu);
	cout<< endl;
	machineList(makina3,flagForMenu);
	
	return 0;
}


