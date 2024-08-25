#include <iostream>
#include <direct.h>
#include <dos.h>

using namespace std;

void list_file();
void directory();
void change_dir();

int main() {
	char buffer[FILENAME_MAX]; 
	int choice;
	
	cout << "      Main Menu     " << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _\n";
	cout << "1. To Display List of files\n";
	cout << "2. To Create New Directory\n";
	cout << "3. To Change the Working Directory\n";
	cout << "4. Exit\n";
    cout << "Enter The Number: ";
	cin >> choice;
	
	if(_getcwd(buffer, FILENAME_MAX)) {		
		cout << "Current Directory: " << buffer << endl;
	}else {
		cout << "There is an error getting the current directory.\n";
	}
	
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
		case 4:
			return 0;
		deafault:
			cout << "Invalid choice try again.\n";
			
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
			cout <<"List of All (*.*) Files\n";
			system("dir");
			break;
	    case 2: {
			break;
	    	string ext;
	    	cout << "Enter file extension: ";
	    	cin>> ext;
	    	system(("dir *." + ext) .c_str());
	    	break;
		}
		case 3: {
			string pattern;
			cout << "Enter file name pattern: ";
			cin >> pattern;
			system(("dir" + pattern) .c_str());
			break;
		}
		default:
			cout <<"Invalid choice try again.\n";
			
	}
}

void directory() {
	string newDirectName;
	cout << "Enter the Directory name: ";
	cin >> newDirectName;
	
	if(_mkdir(newDirectName.c_str()) == 0) {
		cout << newDirectName << "Directory Successfully Created";
	}else {
		cout << "There is an error creating new directory.";
	}
	
}


void change_dir() {
	int choice;
	cout << "   Change Directory   \n";
	cout <<"_ _ _ _ _ _ _ _ _ _ _ _ _\n";
	cout <<"1. Step by step Backward\n";
	cout <<"2. Goto Root Directory\n";
	cout <<"3. Forward Directory\n";
	cout <<"Enter the Number: ";
	cin >> choice;
	char buffer [FILENAME_MAX];
	switch(choice) {
		case 1:
			_chdir("..");
			if(_getcwd(buffer, FILENAME_MAX)) {
				cout << "Current Directory: " << buffer;
			}else {
				cout << "There is an error in changing directory";
			}
			break;
		case 2:
			_chdir("\\");
			if(_getcwd(buffer, FILENAME_MAX)) {
				cout << "Current Directory: " << buffer;
			}else {
				cout << "There is an error in changing directory";
			}
			break;
		case 3: {
			string directoryName;
			cout << "Please enter the Directory Name: ";
			cin >> directoryName;
			if(_chdir(directoryName.c_str()) == 0 && _getcwd(buffer, FILENAME_MAX )) {
				cout <<"Current Directory:  " << buffer ;
			}else {
				cout << "There is an error in changing directory.";
			}
			break;
		}
		deafault:
			cout << "Invalid Choice try again.";
	}
}


