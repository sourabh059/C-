#include <iostream>
    using namespace std;
    
    int main()
    {
       int number;
        int max=-100000;
        int counter =0;
        
        do{
            cin>>number;
            if(number != -1)
            {
                counter++;
            }
            if(number>max)
            {
                max=number;
            }
        }while(number != -1);
        
        if(counter)
        {
            cout<< "the largest number is" <<max<<endl;
        }else
            {
            cout<< "are you kidding? You havent entered any number"<<endl;
        }
    }
