#include<bits/stdc++.h>  
#include<string.h>
using namespace std; 
const int everywordsize=20;
int main()
{
    int size=0;
    string everyword;
    cout<<"Enter words (to stop, type the word done):"<<endl;
    cin>>everyword;
    while(everyword!="done")
    {
        size++;
        cin>>everyword;
    }
    cout<<"You entered a total of "<<size<<" words"<<endl;
}
