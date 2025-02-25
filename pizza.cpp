#include<iostream>
using namespace std;

int main()
{
	cout << "press 1 for PIZZA" << endl;
	cout << "press 2 for CAR" << endl;
	cout << "press 3 for MOBILE" << endl;
	cout <<"-------------------" << endl;
	
	int type;
	int choice;
	int price;
	
	cout <<"-------------------" << endl;
	cout << "enter choice: ";
	cin >> choice;
	
	cout <<"-------------------" << endl;
	
	if(choice ==1)
	{
		cout <<"1 onion pizza" <<endl;
		cout <<"2 mexicon pizza" <<endl;
		cout <<"3 margaritta pizza" <<endl;
		cout <<"4 volcano pizza" <<endl;
		cout <<"-------------------" << endl;
		cout <<"enter type:";
		cin >> type;
		
		
		if(type==1)
		{
			cout <<"you ordered onion pizza" << endl;
		}
		else if(type==2)
		{
			cout <<"you ordered mexicon pizza" <<endl;
		}
		else if(type==3)
		{
			cout <<"you ordered margaritta pizza" <<endl;
		}
		else if(type==4)
		{
			cout <<"you ordered volcano pizza" <<endl;
		}
		else
		{
			cout <<"this type of pizza is not availabale" << endl;
		}
		
		cout <<"-------------------" << endl;
	}
	
	else if (choice==2)
	{
		cout << "1 THAR" << endl;
		cout << "2 SCORPIO" << endl;
		cout << "3 FORTUNER" << endl;
		cout << "4 DEFENDER" << endl;
		cout <<"-------------------" << endl;
		cout <<"enter type:";
		cin >> type;
		
		if(type==1)
		{
			cout <<"you ordered book thar" << endl;
		}
		else if(type==2)
		{
			cout <<"you ordered book scorpio" <<endl;
		}
		else if(type==3)
		{
			cout <<"you ordered book fortuner" <<endl;
		}
		else if(type==4)
		{
			cout <<"you ordered book defender" <<endl;
		}
		else
		{
			cout <<"this type of car is not availabale" << endl;
		}
		
		cout <<"-------------------" << endl;
	}
	else if (choice==3)
	{
		cout << "1 SAMSUNG FOLD" << endl;
		cout << "2 APPLE" << endl;
		cout << "3 VIVO" << endl;
		cout << "4 OPPO" << endl;
		cout <<"-------------------" << endl;
		cout <<"enter type:";
		cin >> type;
		cout <<"-------------------" << endl;
		cout << "1. 1,10,000" << endl;
		cout << "2. 50,000" << endl;
		cout << "3. 1,50,000" << endl;
		cout <<"-------------------" << endl;
		cout <<"enter price:";
		cin >> price;
		
		
		if(price==1)
		{
		   cout <<"-------------------" << endl;
		   cout << "1. 1,10,000" << endl;
		   cout << "2. 50,000" << endl;
		   cout << "3. 1,50,000" << endl;
		   cout <<"-------------------" << endl;
		   cout <<"enter price:";
		   cin >> price;
		   
		   if(price==1)
		   {
			 cout <<"you ordered book 1,10,000" << endl;
		   }
		   else if(price==2)
		   {
			 cout <<"you ordered book 50,000" <<endl;
		   }
		   else if(price==3)
		   {
			 cout <<"you ordered book 1,50,000" <<endl;
		   }
		   else
		   {
			 cout <<"this type of price is not available" << endl;
		   }
		}
		else if(type==2)
		{
			cout <<"you ordered book APPLE" <<endl;
		}
		else if(type==3)
		{
			cout <<"you ordered book VIVO" <<endl;
		}
		else if(type==4)
		{
			cout <<"you ordered book OPPO" <<endl;
		}
		else
		{
			cout <<"this type of mobile is not availabale" << endl;
		}
		
		cout <<"-------------------" << endl;
	}
	else
	{
		cout <<"please select the valid choice...!" << endl;
	}
	
	return 0;
}