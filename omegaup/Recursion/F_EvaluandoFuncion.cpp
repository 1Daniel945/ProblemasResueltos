#include <bits/stdc++.h>
using namespace std;

//Memorizacion
map<long,long>mp;

long long f(long long n){
    if(n==0){
        return 1;
    }
    else{
        if(n<0){
            if(mp[n]==0){
                mp[n]=f(-n)+f(n+1)+2;
                return mp[n];
            }
            else{
                return mp[n];
            }
        }
        if(n>0){
            if(mp[n]==0){
                mp[n]=f(-n+1)+1;
                return mp[n];
            }
            else{
                return mp[n];
            }
        }
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