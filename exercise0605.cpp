#include<bits/stdc++.h>  
#include<cctype>
using namespace std; 
int main()
{
    double income,tax;
    income=tax=0.0;
    cout<<"please enter income: "<<endl;
    while(cin>>income&&income>0)
    {
        if(income==5000)
        {
            tax=0.0;
        }
        else if(income>5000&&income<15000)
        {
            tax=5000*0.0+(income-5000)*0.1;
        }
        else if(income>15000&&income<35000)
        {
            tax=5000*0.0+(15000-5000)*0.1+(income-15000)*0.15;
        }
        else if(income>35000)
        {
            tax=5000*0.0+(15000-5000)*0.1+(35000-15000)*0.15+(income-35000)*0.2;
        }
        cout<<"tax is "<<tax<<"tvarps"<<endl;
        cout<<"next enter income: "<<endl;
    }
}
    
