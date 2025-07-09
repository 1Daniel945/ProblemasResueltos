#include <bits/stdc++.h>
#define fi(x) for(int i=0; i<x; ++i)
using namespace std;

int main(){
    int n,m=-1,ps=-1;
    cin>>n;
    int a[n];
    fi(n){
        cin>>a[i];
    }
    int x=1,mx=0;
    fi(n){
        if(i+1<n){
            a[i]<=a[i+1]?x++:x=1;
        }
        x>mx?mx=x:mx;  
    }
    cout<<mx<<"\n";
    return 0;
}