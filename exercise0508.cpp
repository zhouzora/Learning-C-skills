#include<bits/stdc++.h>  
#include<string.h>
using namespace std; 
const int size=3;
struct Pizza
{
    string name;
    double length;
    double weight;
};
void display(Pizza);
int main(){
    Pizza *spizza=new Pizza;
    cout<<"Enter length of pizza:";
    cin>>spizza->length;
    cin.get();
    cout<<"Enter name of pizza:";
    getline(cin,spizza->name);
    cout<<"Enter weight of pizza:";
    cin>>spizza->weight;
    display(*spizza);
    delete spizza;
}
void display(Pizza lcg)
{
    cout<<"Pizza name is "<<lcg.name<<","<<"length is "<<lcg.length<<","<<"weight is "<<lcg.weight<<endl;
}
