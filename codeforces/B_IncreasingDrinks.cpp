#include <bits/stdc++.h>
#define fi(x)for(int i=0; i<x; ++i)
#define fj(x)for(int j=0; j<x; ++j)
#define in >>
#define p <<
#define psi(t,x) for(pair<string,int>t:x)
using namespace std;

int main(){
    int n,q,v;cin in n;
    int a[n];
    fi(n){
        cin in a[i];
    }
    cin in q;
    fi(q){
        int x=0;
        cin in v; 
        fj(n){
            if(a[j]<=v){
                x++;
            }
        }
        cout p x p "\n";
    }
    return 0;
}