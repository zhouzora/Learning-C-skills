#include<bits/stdc++.h>  
#include<string.h>
using namespace std; 
struct students
{
    string fisrtname;
    string lastname;
};
void display(students);
int main(){
    students name;
    cout<<"Enter your first name: ";
    getline(cin,name.fisrtname);
    cout<<"Enter your last name: ";
    getline(cin,name.lastname);
    display(name);
}
void display(students lcg)
{
    cout<<"Here's the information in a single string: "<<lcg.lastname<<", "<<lcg.fisrtname<<endl;
}