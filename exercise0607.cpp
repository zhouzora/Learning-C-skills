#include<bits/stdc++.h>  
#include<string>
#include<cctype>
using namespace std; 

int main()
{
    cout<<"Enter words (q to quit):"<<endl;
    string word;
    int vowelNum,consonantNum,otherNum;
    vowelNum=consonantNum=otherNum=0;
    while(cin>>word&&word!="q")
    {
        if(isalpha(word[0]))
        {
            if(word[0]=='a'||word[0]=='e'||word[0]=='i'||word[0]=='o'||word[0]=='u')
            {
                vowelNum++;
            }
            else
            {
                consonantNum++;
            }
        }
        else
        {
            otherNum++;
        }
       
    }
    cout<<vowelNum<<" begining with vowel"<<endl;
    cout<<consonantNum<<" begining with constantNum"<<endl;
    cout<<otherNum<<" others"<<endl;
   
}
    
