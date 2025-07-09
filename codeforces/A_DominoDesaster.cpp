#include <bits/stdc++.h>
#define fi(x)for(int i=0; i<x; ++i)
#define fj(x)for(int j=0; j<x; ++j)
#define fir(x,n)for(int r=x-1; r>=n; --r)
#define in >>
#define p <<
#define psi(t,x) for(pair<string,int>t:x)
using namespace std;

int main(){
    int t,n;cin in t;
    string s;
    while(t--){
        cin in n in s;
        fi(s.size()){
            if(s.at(i)=='U'){
                cout p "D"; 
            }
            else if(s.at(i)=='D'){
                cout p "U";
            }
            else{
                cout p s.at(i);
            }
        }
        cout p "\n";
    }
    return 0;
}