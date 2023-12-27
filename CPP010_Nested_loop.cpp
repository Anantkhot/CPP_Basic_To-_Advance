#include<iostream>

using namespace std;

main()
{
    

    for(int i = 1; i <= 10; i++)
    {
        cout<<"Multiplication of table "<<i<<"---->";
        for(int j = 1; j <= 10; j++)
        {    
            //This inner loop will execute 10 time for each iteration of outer loop
            cout<<"\t"<<(i*j)<<"\t";
        }
        cout<<endl;
    }       

}