#include <iostream>

using namespace std;


class bank
{
	private:
	
		int balance = 100000;
		int pin = 2101;
		
		
	public:
		
	  		void setbal(int deposit)
				{
					this->balance = this-> balance + deposit;
				}
		
			void getbal(int pin){
			
			  if(this->pin == pin){
				
				cout << " bal is: " << this-> balance << "/- " << endl; 
				
			  }
			  
			  else
			  {
			  	cout << " Enter valid password" << endl;
			  }
			  
			}
	
};


int main()
{
	
	bank user1;
	
	int deposit = 999;
	
	
	
	int pin;
	cout << "Enter pin:";
	cin >> pin;
	
	user1.setbal(deposit);
	
	user1.getbal(pin);
	
	
	return 0;
}