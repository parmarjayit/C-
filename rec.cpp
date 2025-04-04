#include <iostream>

using namespace std;


int fourth(int n)
{
	return n;
}

int third(int n)
{
	return n+fourth(n-1);
}

int second(int n)
{
	return n+third(n-1);
}

int first(int n)
{
	return n+second(n-1);
}

int main()
{
	cout << first(7);
}

