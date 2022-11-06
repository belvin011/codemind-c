#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res=n*(n+1)/2;
        int array[n-1];
        for(int i=0;i<n-1;i++){
            cin>>array[i];
        }
        int sum=accumulate(array,array+n-1,0);
        cout<<res-sum<<"
";
    }
}