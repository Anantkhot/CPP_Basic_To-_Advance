#include<iostream>

using namespace std;

/*
    Types of variable in CPP
   
    >>int    -  Stores integer Nummber, such as 7 or -7.
    >>double -  Stores floating point number, such as 7.777.
    >>char   -  Stroes single length character, such as 'A', Chrachter values surrounded by single quotes.
    >>string -  stores text, such as "Hello World!", string value are surrounded by double quotes.
    >>bool   -  stores bool values, such as TRUE or FALSE.
*/
main()
{
    int a = 25;
    cout<<"Integer value is: "<<a<<endl;

    double b = 7.77777;
    cout<<"Dpuble value is: "<<b<<endl;

    char c = 'A';
    cout<<"Character value is: "<<c<<endl;

    string d = "Hello World!";
    cout<<"String value is: "<<d<<endl;

    bool e = true;                          //Return 1 if TRUE and retuen 0 if it is false
    cout<<"bool value is: "<<e<<endl; 

}