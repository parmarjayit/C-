#include <iostream>

using namespace std;


void sum(int n)
{
	int sum = 0;
	
	for(int i=1; i<=n; i++)
	{
		sum = sum+i ;
	}
	
	cout  << sum;
}






int main()
{
	int num = 10;
	
	sum(num);
	
	
	return 0;
}