#include<iostream>

using namespace std;

int main()
{
	int marks;
	 cout << "enter marks" << endl;
	 cout <<"----------------" << endl;
	
	cin >> marks ;
	
	cout <<"----------------" << endl;
	char grade ;
	
	if(marks > 90)
	{
		cout << "your grade is A" << endl;
		grade= 'A';
	}
	else if (marks > 70)
	{
		cout << "your grade is B" << endl;
		grade= 'B';
	}
	
	else if (marks > 55)
	{
		cout << "your grade is C" << endl;
		grade= 'C';
	}
	
	else if (marks > 30)
	{
		cout << "your grade is D" << endl;
		grade= 'D';
	}
	
	else if (marks < 30)
	{
		cout << "you failed in exam " << endl;
		grade= 'F';
	}
	else 
	{
		cout << " check your input" << endl;
	}
	
	cout <<"----------------" << endl;
	
	switch (grade)
	{
		case 'A' : cout  <<" excelent" ;
			break;
		case 'B' : cout  <<"very job" ;
			break;
		case 'C' : cout  <<"good job" ;
			break;
		case 'D' : cout  <<"good" ;
			break;
		case 'F' : cout  <<"TRY AGAIN" ;
			break;
		default : cout << "better luck...next time...!";	
	}
	
	
	
	
	return 0;
}