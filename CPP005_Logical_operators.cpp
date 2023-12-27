#include<iostream>

using namespace std;

main()
{
    cout<<"Logical Operators "<<endl;

    // AND - &&
    // True only when both the expression are true. 

    cout<< (7>5 && 2!=7)<<endl;
    cout<< (1>5 && 2!=7)<<endl;
    
    // OR - ||
    // True when both the expression are true and when one of them is true. 

    cout<< (7>5 || 2!=7)<<endl;
    cout<< (1>5 || 2!=7)<<endl;
    
    // NOT - !
    // Return true if result is false and vise-versa.

    cout<< !(7>5  && 2!=7)<<endl;
}