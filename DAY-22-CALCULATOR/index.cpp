#include <iostream>

using namespace std;

void sum()
{
		int first, second;
		cout << " enter first num :" ;
		cin >> first;
		cout << " enter second num :" ;
		cin >> second;
		cout << "sum of " << first << " and " << second << " is = " << first+second << endl;
}
void sub()
{
	int first, second;
	cout << " enter first num :" ;
	cin >> first;
	cout << " enter second num :" ;
	cin >> second;
	cout << "sub of " << first << " and " << second << " is = " << first-second << endl;
}

void multiplication()
{
		int first, second;
		cout << " enter first num :" ;
		cin >> first;
		cout << " enter second num :" ;
		cin >> second;
		cout << "multiplication of " << first << " and " << second << " is = " << first*second << endl;
}

void dividation()
{
		int first, second;
		cout << " enter first num :" ;
		cin >> first;
		cout << " enter second num :" ;
		cin >> second;
		cout << "dividation of " << first << " and " << second << " is = " << first/second << endl;
}

void moduals()
{
	    int first, second;
		cout << " enter first num :" ;
		cin >> first;
		cout << " enter second num :" ;
		cin >> second;
		cout << "moduals of " << first << " and " << second << " is = " << first%second << endl;
}

int main()
{
	int choice, first, second;
	
	while(choice)
	{
		
	cout << " PRESS 1 FOR +" << endl;
	cout << " PRESS 2 FOR -" << endl;
	cout << " PRESS 3 FOR *" << endl;
	cout << " PRESS 4 FOR /" << endl;
	cout << " PRESS 5 FOR %" << endl;
	cout << " PRESS 0 FOR EXIT" << endl;
	cout << "enter your choice :-" ;
	cin >> choice;
	cout << endl;
	
	
	switch(choice)
	{
		case 1:
		  sum();
		break;
		
		
		case 2:
		  sub();
		break;
		
		
		case 3:
		multiplication();
		break;
		
		
		case 4:
		dividation();
		break;
		
		
		case 5:
		moduals();
		break;
		
	default:
		break;
	}
	
}
	
	return 0;
}