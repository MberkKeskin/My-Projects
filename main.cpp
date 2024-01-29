#include <iostream>
#include <vector>
#include <string>

using namespace std;

class book {
public:
	string title;
	string author;
	int publicationYear;
	int choiice;
	string setBookName();
	string setBookAuthor();
	int setBookAge();

	void showBookDetails();
	void isBookDestoed(int choiice);

	~book();
};


string book::setBookName() {
    cin.ignore();
    string name;
    cout << "Enter name: ";
    getline(cin, name);
    return name;
}

string book::setBookAuthor() {
    string authorName;
    cout << "Enter Author name: ";
    getline(cin, authorName);
    return authorName;
}

int book::setBookAge() {
    int year;
    cout << "Enter Publication Year: ";
    cin >> year;
    return year;
}

void book::showBookDetails() {
    cout << "Title: " << title << ", ";
    cout << "Author: " << author << ", ";
    cout << "Publication year: " << publicationYear;
    cout << endl;
}


int main() {
    int chooice =1, size = 0;

    vector<book> bookvector;

    cout << "Library Management System" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Display All Books" << endl;
    cout << "3. Exit" << endl;

    while (chooice != 3) {
        cout << "Please Enter a choice:";
        cin >> chooice;
        
        
            
        if (chooice == 1) {
            book kitap;
            kitap.choiice = chooice;
            kitap.title = kitap.setBookName();
            kitap.author = kitap.setBookAuthor();
            kitap.publicationYear = kitap.setBookAge();
            bookvector.push_back(kitap);
            size++;
        }
        
        if (chooice == 2) {
            for (int i = 0; i < size; i++) {
                bookvector[i].showBookDetails();
            }
        }
             
             if(chooice==3){
                chooice = 3;
              
            }
    }
  
    return 0;
}
