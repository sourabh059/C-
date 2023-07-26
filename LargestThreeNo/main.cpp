#include<iostream>

using namespace std;

int main()
{
    int number1,number2,number3;
   cout<<"Enter the First Number:" <<endl;
    cin>>number1;
    cout<<"Enter the Second number:"<<endl;
    cin>>number2;
      cout<<"Enter the Third number:"<<endl;
    cin>>number3;
    
    int max=number1;
    
    if(number2>max)
    {
        max=number2;
    }
    
     if(number3>max)
    {
        max=number3;
    }
    
    cout<<"the larger number is"<<max<<endl;
}
