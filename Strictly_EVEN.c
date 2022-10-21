#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int c=0;
    int c1=0;
    for(int i=0;i<n;i++){
       if(array[i]%2==0){
           c++;
           if(i%2==0){
               c1++;
           }
       }
}
if(c==c1) cout<<"True"<<"
";
else cout<<"False"<<"
";
}
