#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio
    string s;
    while(cin in s, s != "0"){
        int x = s.size();
        ll sm = 0;
        fr(i, 0, x){
            sm += (s.at(i) - '0') * (pow(2, x - i) - 1); 
            if(sm > INT_MAX){
                sm = INT_MAX;
                break;
            }
        }   
        cout p sm p "\n";
    }
    return 0;
}