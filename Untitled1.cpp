#include <iostream>
#include <direct.h>
#include <dos.h>

using namespace std;

void list_file();
void directory();
void change_dir();

int main() {
	
	int choice;
	
	cout << "      Main Menu     " << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _";
	cout << "1. To Display List of files\n";
	cout << "2. To Create New Directory\n";
	cout << "3. To Change the Working Directory\n";
	cout << "4. Exit\n";
    cout << "Enter The Number: ";
	cin >> choice;
	
	switch (choice) {
		case 1:
			list_file();
			break;
		case 2:
			directory();
			break;
		case 3:
			change_dir();
			break;
		deafault:
			break;
			
	}
	
}

void list_file() {
	int choice;
	
	cout <<"     LIST FILE DETAIL     \n";
	cout <<"_ _ _ _ _ _ _ _ _ _ _ _ _ _\n";
	cout <<"1. List All Files\n";
	cout <<"2. List of Extension Files\n";
	cout <<"3. List of Name Wise\n";
	cout <<"Enter the Number: ";
	cin  >>choice;
	
	switch (choice) {
		case 1:
			cout <<"List of All Files";
			
	    case 2:
	    	cout <<"ada";
			
	}
}

void directory() {
	cout << "";
}

void change_dir() {
	cout << "";
}


