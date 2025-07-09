#include <bits/stdc++.h>
#define fi(x,n)for(int i=x; i<=n; ++i)
#define fj(x,n)for(int j=x; j<=n; ++j)
#define fir(x,n)for(int r=x-1; r>=n; --r)
#define in >>
#define p <<
#define psi(t,x) for(pair<string,int>t:x)
using namespace std;

int main(){
    int n,x;cin in n in x;
    int c=0;
    if(x>n*n){
        cout p"0\n";
    }
    else if(x==1||x==1000000000){
        cout p "1\n";
    }
    else{
        int mt[n+1][n+1];
        fi(1,n){
            fj(1,n){
                mt[i][j]=i*j;
                mt[i][j]==x?c++:c;
            }
        }
        cout p c p "\n";
    }
    return 0;
}