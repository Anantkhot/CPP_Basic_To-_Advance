#include<iostream>

using namespace std;

main()
{
    
    for(int i = 0; i<10; i++)
    {
        if(i == 3)
        {
            continue;   //Everything after continue won't be executed
                        //but loop won't stop, it skips the current iteration
        }
        if(i == 8)
        {
            break;      //Eerything after break won't be executed
                        //loop will stop, control gets out of the loop
        }
        cout<<i<<"\t";
        
    }
}