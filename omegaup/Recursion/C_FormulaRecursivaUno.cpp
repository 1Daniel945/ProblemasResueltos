#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if(n<=5){
        return 1;
    }
    else{
        return f(n-2)*5;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    cout<<f(n)<<"\n";
    return 0;
}