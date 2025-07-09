#include <bits/stdc++.h>
#define fri(x, n) for(int i=x; i<n; ++i)
typedef long long lld;
using namespace std;

lld s;

int main(){
    fri(1, 1000){
        if(i%3==0){
            s+=i;
        }
        else if(i%5==0){
            s+=i;
        }
    }
    cout<<s<<"\n";
    return 0;
}