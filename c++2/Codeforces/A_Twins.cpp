#include<bits/stdc++.h>
#define fi(x) for(int i=0; i<n; ++i)
#define f2(x) for(int i=x-1; i>=0; --i)
using namespace std;

int main(){
    int n,s=0;cin>>n;
    int a[n];
    fi(n){
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+n);
    s/=2;
    int Coins=0,out=0;
    f2(n){
        if(s>=Coins){
            Coins+=a[i];
            out++;
        }
    }
    cout<<out<<"\n";
    return 0;
}