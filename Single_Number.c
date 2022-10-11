#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=0;
    int array[n];
    for(int i=0;i<n;++i){
        cin>>array[i];
    }
    for(auto x:array){
        k^=x;
    }
    cout<<k;
}