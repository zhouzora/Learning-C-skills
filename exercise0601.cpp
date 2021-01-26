#include<bits/stdc++.h>  
#include<cctype>
using namespace std; 
int main()
{
    cout << "Enter text, and type @ to terminate input.\n";
    char ch;
    cin.get(ch);
    while(ch!='@')
    {
        if(isdigit(ch))
            continue;
        else if(isalpha(ch))
        {
            if(islower(ch))
                cout<<(char)toupper(ch);
            else if(isupper(ch))
               cout<<(char)tolower(ch);
        }
        else
        {
            cout<<ch;
        }
        cin.get(ch);
    }
    cout<<"Done!"<<endl;
}
