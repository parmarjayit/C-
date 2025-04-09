#include <iostream>
#include <string.h>

using namespace std;


class student 
{
	
	public:
	
	int grid;
	char name[50];
	int age;
	char course[50];
	float percentage;
	
};



int main()
{
	student student1, student2, student3, student4, student5;
	
	student1.grid = 1122;
	strcpy(student1.name, "jay");
	student1.age = 21;
	strcpy(student1.course, "FULL STACK DEVELOPER");
	student1.percentage = 82.77;
	
	
	student2.grid = 5689;
	strcpy(student2.name, "krushnal");
	student2.age = 20;
	strcpy(student2.course, "JAVASCRIPT");
	student2.percentage = 88.66;
	
	
	student3.grid = 3356;
	strcpy(student3.name, "amit");
	student3.age = 19;
	strcpy(student3.course, "DESIGNING");
	student3.percentage = 84.23;
	
	
	student4.grid = 9874;
	strcpy(student4.name, "meet");
	student4.age = 20;
	strcpy(student4.course, "B.COM");
	student4.percentage = 91.47;
	
	
	student5.grid = 1111;
	strcpy(student5.name, "kartik");
	student5.age = 21;
	strcpy(student5.course, "BBA");
	student5.percentage = 92.27;
	
	cout <<"--------------------" << endl;
	cout <<"--------------------" << endl;
	
	
	cout << "grid = " << student1.grid << endl;
	cout << "name = " << student1.name << endl;
	cout << "age = " << student1.age << endl;
	cout << "course = " << student1.course << endl;
	cout << "percentage = " << student1.percentage << endl;
	
	cout <<"--------------------" << endl;
	cout <<"--------------------" << endl;
	
	
	cout << "grid = " << student2.grid << endl;
	cout << "name = " << student2.name << endl;
	cout << "age = " << student2.age << endl;
	cout << "course = " << student2.course << endl;
	cout << "percentage = " << student2.percentage << endl;
	
	cout <<"--------------------" << endl;
	cout <<"--------------------" << endl;
	
	
	cout << "grid = " << student3.grid << endl;
	cout << "name = " << student3.name << endl;
	cout << "age = " << student3.age << endl;
	cout << "course = " << student3.course << endl;
	cout << "percentage = " << student3.percentage << endl;
	
	cout <<"--------------------" << endl;
	cout <<"--------------------" << endl;
	
	
	cout << "grid = " << student4.grid << endl;
	cout << "name = " << student4.name << endl;
	cout << "age = " << student4.age << endl;
	cout << "course = " << student4.course << endl;
	cout << "percentage = " << student4.percentage << endl;
	
	cout <<"--------------------" << endl;
	cout <<"--------------------" << endl;
	
	
	cout << "grid = " << student5.grid << endl;
	cout << "name = " << student5.name << endl;
	cout << "age = " << student5.age << endl;
	cout << "course = " << student5.course << endl;
	cout << "percentage = " << student5.percentage << endl;
	
	
	
	
	
	
	
	return 0;
}