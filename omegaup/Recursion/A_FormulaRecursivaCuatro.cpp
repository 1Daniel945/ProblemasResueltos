#include <bits/stdc++.h>
using namespace std;

//memorizacion es guardar un calculo para no volver a calcularlo
map<int,int>mp;

int f(int n){
    if(n<=3){
        return 1;
    }
    if(n>=4){
        if(mp[n]==0){
            mp[n]=f(n-1)+f(n-2)+f(n-3);
            return mp[n];
        }
        else{
            return mp[n];
        }
    }
}

int main(){
    int n;cin>>n;
    cout<<f(n)<<"\n";
    return 0;
}