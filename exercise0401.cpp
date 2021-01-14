#include<bits/stdc++.h>  
#include<string.h>
using namespace std; 
struct students
{
    string fisrtname;
    string lastname;
    char grade;
    int age;
};
void display(students);
int main(){
    students name;
    cout<<"What is your first name? ";
    getline(cin,name.fisrtname);
    cout<<"What is your last name? ";
    getline(cin,name.lastname);
    cout<<"What letter grade do you deserve? ";
    cin>>name.grade;
    cout<<"What is your age? ";
    cin>>name.age;
    display(name);
}
void display(students lcg)
{
    cout<<"Name: "<<lcg.lastname<<", "<<lcg.fisrtname<<endl;
    cout<<"Grade: "<<char(lcg.grade+1)<<endl;
    cout<<"Age: "<<lcg.age<<endl;
}
