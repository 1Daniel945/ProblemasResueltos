#include <bits/stdc++.h>
#define fi(x)for(int i=0; i<x; ++i)
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){
    fastio()
    int n;cin >> n;
    int a[n],b[n];
    fi(n)cin >> a[i],b[i]=a[i];
    sort(a,a+n);
    int x=0;
    fi(n){
        if(a[i]!=b[i]){
            x++;
        }
    }
    if(x==0||x==2){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}