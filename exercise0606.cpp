#include<bits/stdc++.h>  
#include<string>
using namespace std; 
struct  donater
{
    string name;
    double money;
};

int main()
{
    int donaternumber,n,m;
    donaternumber=n=m=0;
    cout<<"please enter donaternumber: ";
    cin>>donaternumber;
    cin.get();
    donater *donate=new donater[donaternumber];
    for(int i=0;i<donaternumber;i++)
    {
        cout<<"please enter #"<<i+1<<":\n";
        cout<<"donater's name: ";
        getline(cin,donate[i].name);
        cout<<"donater's money: ";
        cin>>donate[i].money;
        cin.get();
    }
    cout<<"Grand Patrons:"<<endl;
    for(int i=0;i<donaternumber;i++)
    {
        if(donate[i].money>10000)
        {
            cout<<"donate name: "<<donate[i].name<<"\n";
            cout<<"donate money: "<<donate[i].money<<endl;
            n++;
        }
    }
    if(n==0)
    {
        cout<<"None"<<endl;
    }
    cout<<"Patrons:"<<endl;
    for(int i=0;i<donaternumber;i++)
    {
        if(donate[i].money<=10000)
        {
            cout<<"donate name: "<<donate[i].name<<"\n";
            cout<<"donate money: "<<donate[i].money<<endl;
            m++;
        }
    }
    if(m==0)
    {
        cout<<"None"<<endl;
    }  
    delete donate;
}
    
