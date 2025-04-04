#include <iostream>

using namespace std;

int first(int n)
{
	return n*n;
}

int cube(int n)
{
	return n*n;
}

int main()
{
	
	int num = 4;
	
	cout <<  "power of " << first(num) << endl;
	cout <<  "power of " << first(10) << endl;
	cout << "------------------------- "<< endl;
	
	cout << "cube:" << cube(27) << endl;
}