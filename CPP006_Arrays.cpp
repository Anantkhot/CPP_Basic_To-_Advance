#include<iostream>

using namespace std;

main()
{
    cout<<"Arrays in CPP"<<endl;

    int arr[5];         // Data type name of array[no_of_elements]

    //Initializing array elements
    arr[0] = 1;
    arr[1] = 7;
    arr[2] = 4;
    arr[3] = 5;
    arr[4] = 3;

    //Printing array elements and address of each elements

    cout<<"arr[0] " <<arr[0]<<", Addreses "<<&arr[0]<<endl;
    cout<<"arr[1] " <<arr[1]<<", Addreses "<<&arr[1]<<endl;
    cout<<"arr[2] " <<arr[2]<<", Addreses "<<&arr[2]<<endl;
    cout<<"arr[3] " <<arr[3]<<", Addreses "<<&arr[3]<<endl;
    cout<<"arr[4] " <<arr[4]<<", Addreses "<<&arr[4]<<endl;

}