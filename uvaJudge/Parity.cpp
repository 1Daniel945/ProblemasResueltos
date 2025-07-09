#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio();
    int n;
    while(cin in n, n!=0){
        string s="";
        while(n>0){
            s+=to_string(n%2);
            n=n/2;
        }
        reverse(s.begin(),s.end());
        int x = count(s.begin(),s.end(),'1');
        cout p "The parity of " p s p " is " p x p" (mod 2).\n";
    }
    return 0;
}