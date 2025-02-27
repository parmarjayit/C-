#include<iostream>

using namespace std;

int main()
{
	// int i = 1;
	
	// while(i < 5)
	// {
	// 	cout << i << endl;
	
	//  i++;
	
	// }
	
	
	int i = 1 ;
	int num;
	cout <<"enter number";
	cout <<"=";
	cin >> num ; 
	 
	
	
	while (i <= 10)
	{
		cout << num << "x" << i <<"=" <<i*num << endl;
		
		
		i++;
	}
	
	return 0;
}