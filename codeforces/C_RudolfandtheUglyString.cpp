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
    int t,n;cin in t;
    string s;
    while(t--){
        cin in n in s;
        int x=0;
        fr(i,0,s.size()-2){
            if(s.at(i)=='m'&&s.at(i+1)=='a'&&s.at(i+2)=='p'){
                s.at(i)='x';
                s.at(i+1)='x';
                s.at(i+2)='x';
                x++;
            }
            if(s.at(i)=='p'&&s.at(i+1)=='i'&&s.at(i+2)=='e'){
                s.at(i)='x';
                s.at(i+1)='x';
                s.at(i+2)='x';
                x++;
            }
        }
        cout p x p"\n";
    }
    return 0;
}