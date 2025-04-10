#include <iostream>


using namespace std;


class user 
{
	private:
	
	   int no;
	
	public:
	
		int roll;
		
	public:
	
		user shownum(int no)
		{
			cout << " this fun is public " << endl;
			this->no = no;
		}
		
		user getnum()
		{
			cout << this->no << endl;
		}
	
	
};



int main()
{
	
	user user1, user2;
	
	user1.shownum(50);
	user2.shownum(235);
	
	user2.getnum();
	user1.getnum();
	
	
	return 0;
}