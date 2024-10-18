#include<iostream>
using namespace std;

int main()
{
    int a = 10 ,b;
    
    //Prefix Increment
    b = ++a;
    cout<<"After prefix Increament of a = "<<a << ", b = "<<b <<endl;

    //Postfix Increament
    b = a++;
    cout<<"After prefix Increament of a = "<<a << ", b = "<<b <<endl;


    // Prefix decrement 

    b = --a;
    cout<<"After prefix Decrement of a = "<<a << ", b = "<<b <<endl;


    //Postfix Decrement
    b = a--;
    cout<<"After prefix Decrement of a = "<<a << ", b = "<<b <<endl;

    return 0;
}