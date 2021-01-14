#include<bits/stdc++.h>  
#include<string.h>
using namespace std; 
int main()
{
    int number1=0;
    int number2=0;
    int sum=0;
    cout<<"please enter the first number:";
    cin>>number1;
    cout<<"please enter the second number:";
    cin>>number2;
    for(int a=number1;a<=number2;a++)
    {
        sum+=a;
    }
    cout<<"sum of "<<number1<<" and "<<number2<<" is "<<sum<<endl;

}
