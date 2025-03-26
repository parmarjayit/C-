#include <iostream>

using namespace std;

int main()
{
	int arr[3][3] =
	{
		{11, 12, 13},
		{14, 15, 16},
		{17, 18, 19}
	};
	
	int size = sizeof(arr) / sizeof(arr[0][0]);
	
	int sum = 0;
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			sum = sum + arr[i][j] ;
		}
		
	}
	int avg = sum/size ;
	cout << avg;
	
	
	
	
	
	return 0;
}