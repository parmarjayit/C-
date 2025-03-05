#include<iostream>

using namespace std;

int main()
{
	
	for(int i=1; i<=10; i++)
	{
		cout << i << " ";
	}
	
	cout << endl;
	
	for(int j=10; j>0; j--)
	{
		cout << j << " ";
	}
	
	
	// while loop
	
	cout << endl << "--------------" << endl;
	cout << "next" ;
	cout << endl << "--------------" << endl;
	
	int k=1;
	
	while(k<10)
	{
		cout << k << " ";
		k++;
	}
	
	cout << endl;
	
	int s = 10;
	
	while(s>0)
	{
		cout << s <<" ";
		s--;
	}
	
	return 0;
}