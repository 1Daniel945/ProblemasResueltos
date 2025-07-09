#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k;
    cin>>t; 
    while(t--){
        cin>>n>>k;
        int a[n];
        bool f=0;
        for(int i=0; i<n; ++i){
            cin>>a[i];
            if(a[i]==k){
                f=1;
            }
        }
        f==1?cout<<"YES\n":cout<<"NO\n";
    }
}