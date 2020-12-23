#include<bits/stdc++.h>  
#include<string.h>
#include<array>
#include<math.h>
using namespace std; 
const int size=3;
int main(){
    array<double,size>result{0.0};
    double averageresult=0.0;
    cout<<"Enter three results time of runing 40 meters:\n";
    cin>>result[0];
    cin>>result[1];
    cin>>result[2];
    averageresult=(result[0]+result[1]+result[2])/3;
    cout<<"average of result is "<<averageresult<<endl;
    cout<<"result is "<<result[0]<<","<<result[1]<<","<<result[2]<<endl;
}
