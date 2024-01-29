#include <iostream>
#include <string>

using namespace std;

void concatenateStrings(string strOne,string strTwo){
	string str3= strOne + strTwo;
	cout << "Your first string is:" << strOne << endl;
	cout << "Your second string is:" << strTwo << endl;
	cout  << "Your final string is:" << str3;
}

void concateanateaStrings(string strOne, string strTwo, string strThree){
	string str4 = strOne + strTwo + strThree;
	cout << "Your first string is:" << strOne << endl;
	cout << "Your second string is:" << strTwo << endl;
	cout  << "Your third string is:" << strThree<< endl;
	cout <<"Your final string is:"<< str4 ;
}

void reverseString(string str){
	string reversedString;
	int lenght=str.length();
	
	for(int i=0;i<lenght;i++){
		reversedString =reversedString+str[lenght-1-i];
	}
	
	cout << "Your first string is:" << str << endl;
	cout << "Your reversed string is:" << reversedString << endl;
	
}


void countVowels(string str){
	int lenght= str.length(),counterForWovel=0;
	for(int i=0;i<lenght;i++){
		if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='O' || str[i]=='o' || str[i]=='I' || str[i]=='i' || str[i]=='U' || str[i]=='u'){
			counterForWovel++;
		}
	}
	cout << "Your vovel number is:" << counterForWovel << endl;
}

int main() {
	string stringOne,StringTwo,StringThree;
	int chooice;
	
	cout << "1. Concanate two string"<<endl;
	cout << "2. Concanate three string"<<endl;
	cout << "3. Reverse string"<<endl;
	cout << "4. Count vovel letters"<<endl;
	
	cout<< endl;
	
	cout <<"Enter your chooice:";
	cin >>chooice;
	cin.ignore();
	
	cout<< endl;
	
	switch(chooice){
		case 1:
		cout << "Enter your first string: ";
            getline(cin,stringOne);
            cout << "Enter your second string: ";
            getline(cin,StringTwo);
            
			cout<< endl;
			
			concatenateStrings(stringOne, StringTwo);
			break;
			
		case 2:
			cout << "Enter your first string:";
			getline(cin,stringOne);
			
			cout << "Enter your second string:";
			getline(cin,StringTwo);
			
			cout << "Enter your third string:";
			getline(cin,StringThree);
			
			cout<< endl;
			
			concateanateaStrings(stringOne, StringTwo, StringThree);
			
			break;
			
		case 3:
			cout << "Enter your string:";
			getline(cin,stringOne);
			
		
			reverseString(stringOne);
		
			
			break;
			
		
		case 4:
			cout << "Enter your string:";
			getline(cin, stringOne);
			
			countVowels(stringOne);
			break;
		
			
	}
	

	return 0;
}
