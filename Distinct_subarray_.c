#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,r;
    cin>>l>>r;
    vector<int>v;
    for(int i=l;i<=r;i++){
        v.emplace_back(i);
    }
    int c=0;
    for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=v[k];
            }
            if(sum%2!=0) c++;
        }
    }
    cout<<c<<"
";
    
}