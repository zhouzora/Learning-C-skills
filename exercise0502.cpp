#include<bits/stdc++.h>  
#include<string.h>
#include<array>
using namespace std; 
const int ArSize=100;
int main()
{
    array<long double,ArSize+1>factorials;
    factorials[0]=factorials[1]=1.0;
    for(int i=2;i<=ArSize;i++)
        factorials[i]=i*factorials[i-1];
    for(int i=0;i<=ArSize;i++)
        cout<<i<<"!="<<factorials[i]<<endl;

}
