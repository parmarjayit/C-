#include <iostream>
#include <string.h>

using namespace std;

class mentor 
{
	public:
	int id;	
	char post[10];
	static int coursecode ;
};


class student 
{
	public:
	int grid;
	char name[10];
	static int coursecode;
};

int student:: coursecode = 5585;
int mentor:: coursecode = 2101;

int main(){
	
	student st1, st2;
	
	st1.grid = 5587;
	strcpy(st1.name, " Gopi ");
	
	st2.grid = 4545;
	strcpy(st2.name, " jay ");
	
	
	cout << st1.grid << " " << st1.name << " " << student::coursecode << endl;
	cout << st2.grid << " " << st2.name << " " << mentor::coursecode << endl;
	
	
	return 0;	
}