#include<iostream>

using namespace std;

main()
{
    int j = 0;

    while(j < 10) {
        cout<<j;

        j++;     //Increment inside the loop
    }
    cout<<endl;

    while(j--)
        cout<<j;

    cout<<endl;
    int  i = 10;
   
    //Does not check condition at the beginning
    // Excutes atleast once
   
    do {
        cout<<"Hello World! "<<endl;
        i--;
    }while(i);
}