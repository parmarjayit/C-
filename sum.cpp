#include <iostream>

using namespace std;

int main()
{
	
	int arr1[3][3] = 
	{
		{81, 2, 8},
		{4, 55, 66},
		{97, 28, 49}
	};
	
	int arr2[3][3] = 
	{
		{2, 21, 90},
		{18, 7, 6},
		{4, 12, 3}
	};
	
	int arr3[3][3];
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j];	
		}
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout << arr3[i][j]	<< " " ;
		}
		cout << endl;
	}
	
	
	
	return 0;
}