#include<bits/stdc++.h>
typedef long long lld;
using namespace std;

lld c=0;

void recursion(lld a,lld b){
    if(a%b==0)return;
    c++;
    recursion(a+=1, b);
}

int main(){
    lld t,a,b,x;
    cin>>t;
    while (t--)
    {
        c=0;
        cin>>a>>b;
        recursion(a,b);
        cout<<c<<"\n";
    }
    return 0;
}