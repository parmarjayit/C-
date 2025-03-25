#include <iostream>
using namespace std;

int main()
{
	
	int arr[3][3] =
	{
		{14, 28, 35},
		{48, 17, 65},
		{47, 84, 39}
	};
	
	
	// cout << sizeof(arr[2][2]) ;
	
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout << arr[i][j]  << " " ;
		}
		
		cout << endl ;
	}
	
	
	return 0;
}