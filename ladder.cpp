#include<iostream>

using namespace std;

int main()
{
	
	cout << "press 1 for THAR" << endl;
	cout << "press 2 for SCORPIO" << endl;
	cout << "press 3 for FORTUNER" << endl;
	
	cout <<"--------------" << endl;
	
	
	
	int choice;
	
	cout <<"--------------" << endl;
	
	cout << "enter choice: ";
	
	cin >> choice;
	
	cout <<"--------------" << endl;
	
	
	if(choice == 1)
	
	{
		cout << "your book THAR"  << endl;
	}
	
	else if(choice ==2)
	{
		cout << "your book SCORPIO" << endl;
	}
	
	else if(choice == 3)
	{
		cout << "your book FORTUNER" << endl;
	}
	
	else
	{
		cout << "please select the valid choice...! " << endl;
	}
	
	return 0;
}