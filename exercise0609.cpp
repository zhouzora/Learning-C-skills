#include<bits/stdc++.h>  
#include<fstream>
#include<cstdlib>
#include<string.h>
using namespace std; 
struct  donater
{
    string name;
    double money;
};

int main()
{
    string filename;
    int donaternumber,n,m;
    donaternumber=n=m=0;
    ifstream inFile;
    cout<<"please enter filename you want to open: "<<endl;
    getline(cin,filename);
    inFile.open(filename.c_str());
    if(!inFile.is_open())
    {
        cout<<"can not open the file "<<filename<<endl;
        exit(EXIT_FAILURE);
    }
    inFile>>donaternumber;
    inFile.get();
    donater *donate=new donater[donaternumber];
    for(int i=0;i<donaternumber;i++)
    {
        getline(inFile,donate[i].name);
        inFile>>donate[i].money;
        inFile.get();
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
    inFile.close();
}
    
