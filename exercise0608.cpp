#include<bits/stdc++.h>  
#include<fstream>
#include<cstdlib>
using namespace std; 
int main()
{
    string filename;
    int num=0;
    char ch;
    ifstream inFile;
    cout<<"please enter filename you want to open: "<<endl;
    getline(cin,filename);
    inFile.open(filename.c_str());
    if(!inFile.is_open())
    {
        cout<<"can not open the file "<<filename<<endl;
        exit(EXIT_FAILURE);
    }
    while(inFile>>ch&&inFile.good()&&!inFile.eof())
    {
        num++;
    }
    
    cout<<filename<<" contains "<<num<<" chars"<<endl;
}
    
