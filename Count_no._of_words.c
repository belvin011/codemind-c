#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int c=1;
    for(int i=0;i<s.size();++i){
        if(s[i]==' '){
            c++;
            
        }
    }
    cout<<c;
}