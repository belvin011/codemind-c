#include<bits/stdc++.h>
using namespace std;
char Lower(char c){
    return 'a'+(c-'A');
}
int main(){
    string s;
    cin>>s;
    string res;
    for(int i=0;i<s.size();++i){
        if(s[i]>=65 and s[i]<=90){
            res.push_back(Lower(s[i]));
        }
        else{
            res.push_back(s[i]);
        }
        
    }
    for(auto x:res){
        cout<<x;
    }
}