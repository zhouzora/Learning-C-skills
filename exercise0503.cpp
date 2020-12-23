#include<bits/stdc++.h>  
#include<string.h>
using namespace std; 
const int size=128;
struct students
{
    char fisrtname[size];
    char lastname[size];
};
void display(students);
int main(){
    students name;
    cout<<"Enter your first name: ";
    cin.get(name.fisrtname,size);
    cin.get();
    cout<<"Enter your last name: ";
    cin.get(name.lastname,size);
    display(name);
}
void display(students lcg)
{
    cout<<"Here's the information in a single string: "<<lcg.lastname<<", "<<lcg.fisrtname<<endl;
}