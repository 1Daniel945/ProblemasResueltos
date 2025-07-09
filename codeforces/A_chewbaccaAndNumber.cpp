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
    fastio();
    string s,s1;cin in s;
    fr(i,0,s.size()){
        if(s.at(i)-'0'>4){
            if(9-(s.at(i)-'0')>0){
                s.at(i)=9-(s.at(i)-'0')+'0';
            }
            else{
                if(i!=0){
                    s.at(i)=9-(s.at(i)-'0')+'0';
                }
            }
        }
    }
    cout p s p "\n";
    return 0;
}