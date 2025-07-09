#include <bits/stdc++.h>
#define fi(x,n)for(int i=x; i<n; ++i)
#define fj(x,n)for(int j=x; j<n; ++j)
#define in >>
#define my >=
#define mn <=
#define p <<
#define psi(t,x) for(pair<string,int>t:x)
typedef long long ll;
using namespace std;

int main() {
    int n;cin in n;
    int x=n,x1,s=0;
    fi(0,n){
        x1 = pow(2,i);
        s+= x/x1;
    }
    cout p s p "\n";
    return 0;
}