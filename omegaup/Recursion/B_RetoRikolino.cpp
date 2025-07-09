#include <bits/stdc++.h>
using namespace std;

int a[20],n;

void p(int pos){
    if(pos==n){
        for(int i=0; i<n; ++i){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    a[pos]=0;
    p(pos+1);
    a[pos]=1;
    p(pos+1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    p(0);
    return 0;
}