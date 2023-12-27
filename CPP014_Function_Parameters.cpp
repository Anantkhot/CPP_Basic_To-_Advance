#include<iostream>

using namespace std;

/*
    Syntax:
            Return type function name(Parameters)
            {
                body of the function
            }
*/

void testfunction()
{
    cout<<"I just got executed "<<endl;
}

void Myfunction(string country = "India")   //Default Parameter
{
    cout<<country<<endl;
}

main()
{
    testfunction();
    
    Myfunction();                           //Default value
    Myfunction("America");                  //Overwrites value with America
}