#include<iostream>
using namespace std;

int main()
{
    int const metters = 1000;
    int km;
    int km_to_mt;
    cout<<"Enter km to convert in metters: ";
    cin>>km;
    km_to_mt= km*metters;
    cout<<km<<"Km in metters are : "<<km_to_mt;

    return 0;
}