#include <iostream>

using namespace std;

int main()
{
    cout<<"to Exit from programr press -1"<<endl;
    int number;
    cin>> number;
    int max=number;
    
    while(number != -1)
    {
        if(number > max)
        {
            max=number;
        }
        cin>> number;
    }
    
    cout << "the largest number is"<<max<<endl;
}