#include <iostream>

using namespace std;

int main()
{
	char l = 'a';
	
	do
	{
		cout << l << " ";
		l = l+4;
	} while (l<='z');
	
	
	
	return 0;
}