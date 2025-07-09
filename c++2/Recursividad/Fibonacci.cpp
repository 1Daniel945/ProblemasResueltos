#include<bits/stdc++.h>
#include <immintrin.h>
using namespace std;

int n;

int f(int n){
    if(n==1 || n==0){
        return 1;
    }
    return f(n-1)+f(n-2);
}

int main(){
    cin>>n;
    cout<<f(n)<<"\n";
    return 0;
}

