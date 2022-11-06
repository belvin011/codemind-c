#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>>ans;
    for(int i=0;i<m;i++){
        vector<int>v;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        ans.push_back(v);
        
    }
    int sum=0;
    for(auto it1:ans){
        for(auto it2:it1){
            sum+=it2;
        }
    }
    cout<<sum<<"
";
}