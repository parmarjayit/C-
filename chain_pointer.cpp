#include<iostream>

using namespace std;

int main(){

    int a= 20;
    int *b= &a;
    int **c= &b;
    int ***d= &c;

  
    cout << &a << endl;

    cout << ***d ;
 

    return 0;
}