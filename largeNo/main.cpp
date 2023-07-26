#include<iostream>

using namespace std;

int main()
{
    int number1,number2;
   cout<<"Enter the First Number:" <<endl;
    cin>>number1;
    cout<<"Enter the Second number:"<<endl;
    cin>>number2;
    
    int max=number1;
    
    if(number2>max)
    {
        max=number2;
    }
    
    cout<<"the larger number is"<<max<<endl;
}
