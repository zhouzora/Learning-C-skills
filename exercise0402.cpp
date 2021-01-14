#include<bits/stdc++.h>  
#include<string.h>
using namespace std; 
int main(){
    string name,dessert;
    cout<<"Enter your name:\n";
    getline(cin,name);
    cout<<"Enter your favorite dessert"<<endl;
    getline(cin,dessert);
    cout<<"I have some delicious "<<dessert;
    cout<<" for you, "<<name<<".\n";
    return 0;
}
