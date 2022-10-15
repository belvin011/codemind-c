#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    char c;
    cin>>c;
    int c1=0;
    for(int i=0;i<s.size();++i){
        if(s[i]==c) c1++;
    }
    if(c1>0) cout<<c1<<"
";
    else cout<<"-1"<<"
";
    
}