#include<bits/stdc++.h>  
using namespace std; 
const int strsize=20;
const int size=5;
void displayfullname();
void displaytitle();
void displaybopname();
void displaypreference();
struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};
bop report[size]=
{
       {
            "Wimp Macho", 
            "BOSS", 
            "WM", 
            0
        },
        {
            "Raki Rhodes",
            "Manager",
            "Junior Programmer",
            2
        },
        {
            "Celia Laiter",
            "MIPS",
            "CL",
            1
        },
        {
            "Hoppy Hipman",
            "Analyst Trainee",
            "AT",
            1
        },
        {
            "Pat Hand",
            "Student",
            "LOOPY",
            2
        }
};

int main()
{
   
    cout<<"Benevolent Order of Programmers Report\n";
    cout.flags(ios::left);
    cout << setw(30) << "a. display by name" << "b. display by title" << endl;
    cout << setw(30) << "c. display by bopname" << "d. display by preference" << endl;
    cout << setw(30) << "q. quit"<<endl;
    cout<<"Enter your choice: ";
    char ch;
    while(cin>>ch)
    {
        if(ch=='q')
        {
            break;
        }
        switch(ch)
        {
            case 'a':
                displayfullname();
                break;
            case 'b':
                displaytitle();
                break;
            case 'c':
                displaybopname();
                break;
            case 'd':
                displaypreference();
                break;
            default:
                cout<<"please enter a,b,c,d,q\n";
        }
        cout<<"next choice: "<<endl;
    }
    cout<<"Bye "<<endl;
}


void displayfullname()
{
    for(int i=0;i<size;i++)
    {
         cout<<report[i].fullname<<endl;
    }
}
void displaytitle()
{
    for(int i=0;i<size;i++)
    {
        cout<<report[i].title<<endl;
    }
}
void displaybopname()
{
    for(int i=0;i<size;i++)
    {
        cout<<report[i].bopname<<endl;
    }
}
void displaypreference()
{
    for(int i=0;i<size;i++)
    {
        if(report[i].preference==0)
        {
            cout<<report[i].fullname<<endl;
        }
        else if(report[i].preference==1)
        {
             cout<<report[i].title<<endl;
        }
        else if(report[i].preference==2)
        {
            cout<<report[i].bopname<<endl;
        }
    }
}

