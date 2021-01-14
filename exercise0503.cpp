#include<bits/stdc++.h>  
#include<string.h>
#include<array>
using namespace std; 
int main()
{
    cout<<"please input interger:";
    int sum=0,number;
    while((cin>>number)&&number!=0)
    {
        sum+=number;
        cout<<"sum is "<<sum<<endl;
        cout<<"please input interger:";
    }
    
}
