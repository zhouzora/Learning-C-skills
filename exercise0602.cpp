#include<bits/stdc++.h>  
#include<array>
#include<cctype>
using namespace std; 
const int size=10;
int main()
{
    array<double,size>donations={};
    int large_avg,count;
    large_avg=count=0;
    double sum,average;
    sum=average=0.0;
    cout<<"Please enter up to ten double value, Non-digital to exit:"<<endl;
    while(cin>>donations[count]&& count<size )
    {
        sum+=donations[count];
        if(count++<size);
            cout<<"donation# "<<count+1<<endl;
    }
    average=sum/count;
    for(int i=0;i<count;i++)
    {
        if(donations[i]>average)
        {
            large_avg++;
        }
    }
    if(count==0)
        cout<<"There is no donation"<<endl;
    else
    {
        if(count==1)
            cout<<"average is "<<average<<"there is no donation grather than average"<<endl;
        else
        {
            cout<<"there are "<<large_avg<<" grather than average: "<<average<<endl;
        }
    }
}
