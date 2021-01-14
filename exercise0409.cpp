#include<bits/stdc++.h>  
#include<string.h>
using namespace std; 
const int size=3;
struct CandyBar
{
    string name;
    double weight;
    int calories;
};
int main(){
    CandyBar *snack=new CandyBar[size]{
        {"Mocha Munch",2.3,350},
        {"Pocha Punch",4.3,550},
        {"Nocha Nunch",3.3,450}
    };
    for (int i=0;i<size;i++)
    {
        cout<<"name is "<<snack[i].name<<endl;
        cout<<"weight is "<<snack[i].weight<<endl;
        cout<<"calories is "<<snack[i].calories<<endl;
    }
}
