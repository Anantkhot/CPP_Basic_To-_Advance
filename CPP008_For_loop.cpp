#include<iostream>

using namespace std;

/*
    For Loop
    Syntax- for(intialization;conditoin;increment/Decrement)
            {
                line of code
            }
*/
main()
{
    int arr[]={4,6,2,6,7};

    //Printing array elements
    for(int i = 0; i<sizeof(arr)/sizeof(int); i++)
    {
        cout<<arr[i]<<" ";
    }

    /*infinite loop
    for(;;)
    {
        cout<<"Stop me if you can ";
    }
    */
}