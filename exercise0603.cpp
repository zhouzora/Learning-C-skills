#include<bits/stdc++.h>  
using namespace std; 
int main()
{
    cout<<"Please enter one of the following choices:\n";
    //cout<<"c)carnivore\t p)pianust\n";
    //cout<<"t)tree\t g)game\n";
    cout.flags(ios::left);
    cout << setw(20) << "c) carnivore" << "p) pianist" << endl;
    cout << setw(20) << "t) tree" << "g) game" << endl;
    char ch;
    while(cin>>ch)
    {
        switch(ch)
        {
            case 'c':
                cout<<"A maple is a carnivore\n";
                break;
            case 'p':
                cout<<"A maple is a pianust\n";
                break;
            case 't':
                cout<<"A maple is a tree\n";
                break;
            case 'g':
                cout<<"A maple is a game\n";
                break;
            default:
                cout<<"please enter a c, p, t, or g:";
        }
        cin.get();
    }
}
