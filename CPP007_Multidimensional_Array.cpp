#include<iostream>

using namespace std;

main()
{
    cout<<"Multidimensional Array "<<endl;

    int arr[2][3] = {}; //Intializing all array elememts to zero

    //Initialize Each array elements to respective value

    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    
    arr[1][0] = 1;
    arr[1][1] = 2;
    arr[1][2] = 3;

    arr[2][0] = 1;
    arr[2][1] = 2;
    arr[2][2] = 3;

    //Printing all array elements

    cout<< arr[0][0] <<","<<arr[0][1]<<","<<arr[0][2]<<endl;
    cout<< arr[1][0] <<","<<arr[1][1]<<","<<arr[1][2]<<endl;
    cout<< arr[2][0] <<","<<arr[2][1]<<","<<arr[2][2]<<endl;
}