#include<iostream>
using namespace std;

int main()
{
    //Rules for naming a variable
    //A variable name can only have alphabets, numbers, and the underscore _.
    //A variable name cannot begin with  number.
    //It is a preferred practice to begin variable names with a lowercase character. For example, name is preferable to Name.
    //A variable name cannot be a keyword. For example, int is a keyword that is used to denote integers.
    //A variable name can start with an underscore. However, it's not considered a good practice.

    
    // Sentax
    //Type variable_name = value;


    //1) Int: store integer values without decimal values like 12,435,657

    int age = 20;
    cout<<"Manan is "<<age<<" Years"<<endl;

    //-------------------------------------------------------------------//

    //2) Float : Store decimal values like 23.43 , 45.65, 767.34

    float marks = 30.45;
    cout<<"Manan get"<<marks<<" In CS"<<endl;


    //-----------------------------------------------------------------//

    // 3) char : Store character such as 'a', 'B'

    char grade = 'B';
    cout<<"Manan get " <<grade<< "  In CS" <<endl;

    //---------------------------------------------------------------//

    // 4) String : Store text such as "This is c++ video for beginners"
    string tittle = "This video is related Variables";
    cout<<tittle<<endl;

    //-----------------------------------------------------------//

    // 5) Bool: Store just two values True or false
    bool isready = false;
    cout<<isready<<endl;



    //----------------------Tips----------------------//
    int numbers;
    numbers = 20;
    numbers = 60;
    cout<<"Number is " <<numbers;


 



    return 0;



}