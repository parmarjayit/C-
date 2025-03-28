#include<iostream>

using namespace std;



int sum(int n)
{
	int sum = 0;
	for(int i=1; i<=n; i++)
	{
		sum = sum + i ;
	}
	return sum;
}


int main()
{
	int num = 25;

	int avg = sum(num)/num;
	
	cout << "AVG = " << avg;
	
	return 0;
}