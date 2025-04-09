#include <iostream>

using namespace std;

int main()
{
	int a = 50;
	int b = a;
	
	a=100;
	
	cout << a << endl;
	cout << b << endl;
	
	int x = 50;
	int &z = x;
	
	cout << sizeof(z) << endl;
	
	
	
	
	
	return 0;
}