#include<iostream>

using namespace std;

int globalvariable;     //Global variable declaration
main()
{
    int localvariable;

    cout<<globalvariable<<endl;     //default value is zero
    cout<<localvariable<<endl;      //Default value is garbage value



    /*
    int a =10;              //local variable

    if(a == 10)
        int result;
        result = a*5;

    cout<<result;           //Error as result local varible limited to if block      
    */
}