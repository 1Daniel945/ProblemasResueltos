#include <bits/stdc++.h>
#define fri(x,n) for(int i=x; i<n; ++i)
using namespace std;

int main(){
    int n,h,s=0;
    cin>>n>>h;
    int a[n];
    fri(0,n)cin>>a[i];
    fri(0,n){
        a[i]>h?s+=2:s+=1;
    }
    cout<<s<<"\n";
    return 0;
}