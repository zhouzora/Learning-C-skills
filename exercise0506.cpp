#include<bits/stdc++.h>  
#include<string.h>
#include<array>
using namespace std; 
const int size=12;
const int years=3;
int main()
{
    const char * month[size]={
        "january",
        "february",
        "march",
        "april",
        "may",
        "june",
        "july",
        "august",
        "september",
        "october",
        "november",
        "december"
    };
    int sum=0;
    int sales[years][size]={};
    for(int i=0;i<years;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout<<"year "<<i+1<<" please enter sales of book "<<month[j]<<":";
            cin>>sales[i][j];
            sum+=sales[i][j];
        }
    }
    cout<<"the total sum is "<<sum<<endl;
    for(int i=0;i<years;i++)
    {
         for(int j=0;j<size;j++)
        {
            cout<<"year "<<i+1<<" month "<<month[j]<<" sales of book is:"<<sales[i][j]<<endl;
        }
    }
}
