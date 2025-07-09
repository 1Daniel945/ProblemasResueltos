#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define finc(i,x,n,c)for(int i=x; i<(int)n; i+=c)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
typedef double db;
using namespace std;

int main(){
    int t;cin in t;
    string s,s2="314159265358979323846264338327";
    while (t--){
        cin in s;
        //Debe empezar con 3
        int x=0;
        if(s.at(0)=='3'){
            x++;
            fr(i,1,s.size()){
                if(s.at(i)==s2.at(i))x++;    
                else break;
            }
        }
        cout p x p "\n";
    }
    return 0;
}