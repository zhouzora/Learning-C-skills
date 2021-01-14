#include<bits/stdc++.h>  
#include<string.h>
#include<array>
using namespace std; 
const int size=12;
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
    array<int,size>sales={};
    for(int i=0;i<size;i++)
    {
        cout<<"please enter sales of book "<<month[i]<<":";
        cin>>sales[i];
        sum+=sales[i];
    }
    cout<<"the total sum is "<<sum<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"month "<<month[i]<<" sales is "<<sales[i]<<endl;
    }
}
