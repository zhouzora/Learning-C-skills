#include<bits/stdc++.h>  
#include<string.h>
using namespace std; 
int main()
{
    int years=0;
    double deposit=100;
    double interest_Daphne=0.0;
    double sum_Daphne=0.0;
    double interest_Cleo=0.0;
    double sum_Cleo=0.0;
    interest_Daphne=0.1*deposit;
    sum_Daphne=deposit+interest_Daphne;
    interest_Cleo=0.05*deposit;
    sum_Cleo=deposit+interest_Cleo;
    while(sum_Cleo<=sum_Daphne)
    {
        sum_Cleo+=sum_Cleo*0.05;
        sum_Daphne=sum_Daphne+interest_Daphne;
        years++;
    }
    cout<<"there are"<<years<<"Cleo"<<sum_Cleo<<"is faster than Daphne"<<sum_Daphne;
}
