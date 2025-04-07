#include<iostream>

using namespace std;

int main(){

    int a= 10;
    int *b= &a;
    int **c= &b;

    cout << &a << endl;

    cout << &b << endl;

    cout << **c ;
 

    return 0;
}