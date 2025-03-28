#include<iostream>

using namespace std;

int sum()
{
	int num =10;
	int sum =0;
	for(int i=1; i<=num; i++)
	{
		sum = sum+i;
	}
	return 60;
	
}



int main()
{
	// int a = 100;
	// int b = a;
	
	int avg = sum()/10;
	
	cout << " sum is " << avg;

	
	return 0;
}