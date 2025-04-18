#include <iostream>
#include <string.h>

using namespace std;


class animal
{
	public:
	char name[100];
	char breed[100];
	int age;
	char type[100];
	
	
	
	animal()
	{
		strcpy(this->name, "-");
		strcpy(this->breed, "-");
		this->age = 0;
		strcpy(this->type, "dog");
		
		cout << " welcome dog..!" << endl;
	}
	
	animal(char n[])
	{
		strcpy(this->type, n);
	}
	
	
};

int main()
{
		animal dog1, cat("tiger"), whale("fish"), tuphy;
	
	int a = 20;
	
	cout << dog1.type << endl;
	cout << cat.type << endl;
	cout << whale.type << endl;
	cout << tuphy.type << endl;
	
	
	
	return 0;
}

