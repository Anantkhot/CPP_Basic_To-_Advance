#include<iostream>

using namespace std;

main()
{
    string food = "Biryani";
    string &meal = food;            //Reference to food

    cout<<food<<endl;                //Outputs Biryani
    cout<<meal<<endl;               //Outputs Biryani

}