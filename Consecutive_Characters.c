#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=1;
    int maxi=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            c++;
            maxi=max(maxi,c);
        } 
        else{
            c=1;
        }
    }
    cout<<maxi;
}