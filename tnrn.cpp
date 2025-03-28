#include <iostream>

using namespace std;

void sum()
{
	int num = 10;
	int sum = 0;
	
	for(int i=1; i<=10; i++)
	{
		sum = sum + i;
	}
	
	cout << sum;
}

int main()
{
	sum();

	
	return 0;
}