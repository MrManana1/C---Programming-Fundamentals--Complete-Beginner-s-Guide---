#include<iostream>
using namespace std;

int main()
{
    int a = 11;
    int b = 12;

    cout<<"Differece  of "<<a <<" and "<<b<<" Using Arethemitic operators: ";
    cout<<a-b<<endl;

    cout<<"Differece of "<<a <<" and "<<b<<" Using Compund assignment operators: ";
    a -= b;
    cout<<a;
    return 0;
}