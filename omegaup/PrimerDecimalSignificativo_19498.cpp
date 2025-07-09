#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<n; ++i)
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
    int n;cin in n;
    string s;
    int ans=0;
    while (n--){
        cin in s;
        int x=0;
        if(s.find(".")!=string::npos){
            x=s.find(".");
            fr(i,x+1,s.size()){
                if(s.at(i)!='0'){
                    ans+=s.at(i)-'0';
                    break;
                }
            }
        }
    }
    cout p ans p "\n";
    return 0;
}