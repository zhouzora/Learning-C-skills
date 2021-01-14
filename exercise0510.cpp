#include<bits/stdc++.h>  
#include<string.h>
using namespace std; 

const int rows=20;
const int cows=20;
int main()
{
    int number=0;
    cout<<"Enter number of rows:"<<endl;
    cin>>number;
    for(int i=0;i<number;i++)
    {
        for(int j=number-i;j>1;j--)
        {
            cout<<".";
        }

        for(int k=0;k<=i;++k)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
}
