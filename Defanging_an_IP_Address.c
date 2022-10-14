#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s1;
    for(int i=0;i<s.size();++i){
        if(s[i]=='.'){
            s1+="[.]";
            
        }
        else{
            s1.push_back(s[i]);
        }
    }
    for(auto x:s1){
        cout<<x;
    }
}