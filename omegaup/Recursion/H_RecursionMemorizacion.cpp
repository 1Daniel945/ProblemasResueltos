#include <bits/stdc++.h>
typedef unsigned long long ull;
#define fi(x)for(int i=0; i<x; ++i)
#define p <<
using namespace std;

int x=0;
map<ull, ull>mp;

ull f(ull a, ull b, ull c){
    ull v = min(a,min(b,c));
    x++;
    if(v<=3){
        if(mp[v]==0)mp[v]=a+(2*b)+(3*c);
        return mp[v];
    }
    else{
        ull s=a+b+c;
        if(a+b+c==100){
            x++;
            return 0;
        }
        else{
            if(mp[s]==0)mp[s]=f(a-1,b-1,c-1)+f(a,b-3,c-3)+f((a/2),b,c);
            return mp[s];
        }
    }
}   

int main(){
    ull a[3];
    fi(3){
        cin>>a[i];
    }
    cout <<f(a[0],a[1],a[2])<<" "<<x<<"\n";
    return 0;
}