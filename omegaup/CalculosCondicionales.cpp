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
    int n,c=0;cin in n;
    string x=to_string(n);
    if(n%2==0){
        n/=2;
        c++;
    }
    else{
        n+=1;
        c++;
    }
    if(to_string(n).size()my 3){
        n/=100;
        c++;
    }
    else if(to_string(n).size()==2){ 
        n/=10;
        c++;
    }
    if(n%3==0){
        n-=1;
        c++;
    }
    cout p n p " " p c p "\n";
    return 0;
}