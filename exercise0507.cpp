#include<bits/stdc++.h>  
#include<string.h>
#include<array>
using namespace std; 
struct car
{
    string supplier;
    int year;
};
int main()
{
    int cars_size=0;
    cout<<"how many cars do you wish to catalog: ";
    (cin>>cars_size).get();
    car *cars=new car[cars_size];
    for(int i=0;i<cars_size;i++)
    {
        cout<<"Car #"<<i+1<<":"<<endl;
        cout<<"Please enter the make:";
        getline(cin,cars[i].supplier);
        cout<<"Please enter the year made:";
        (cin>>cars[i].year).get();
    }
    cout<<"Here is your collection:"<<endl;
    for(int i=0;i<cars_size;i++)
    {
        cout<<cars[i].year<<" "<<cars[i].supplier<<endl;
    }
    delete []cars;
}
