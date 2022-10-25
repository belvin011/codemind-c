#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='U') c++;
        if(s[i]=='D') c--;
        if(s[i]=='L') c--;
        if(s[i]=='R') c++;
        
    }
    if(c==0) cout<<"True"<<"
";
    else cout<<"False"<<"
";
}