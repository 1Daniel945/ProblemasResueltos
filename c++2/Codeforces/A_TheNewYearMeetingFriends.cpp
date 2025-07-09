#include <bits/stdc++.h>
#define fi(x) for(int i=0; i<x; ++i)
using namespace std;

int main(){
    int a[3], x=0;
    fi(3){
        cin>>a[i];
    }
    sort(a, a+3);
    fi(3){
        i+1<3?x+=a[i+1]-a[i]:x;   
    }
    cout<<x<<"\n";
    return 0;
}