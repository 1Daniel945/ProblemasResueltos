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
    int n;cin in n;
    string s,s1;cin in s;
    int X=count(s.begin(),s.end(),'X');
    int mt=n/2;
    int x=count(s.begin(),s.end(),'x');
    if(x==mt && X==mt){
        cout p "0\n" p s p "\n";
    }
    else{
        int ct=0;
        fr(i,0,s.size()){
            if(x<mt&&s.at(i)=='X'){
                x++;
                ct++;
                s.at(i)=tolower(s.at(i));
            }
        }
        fr(i,0,s.size()){
            if(X<mt&&s.at(i)=='x'){
                X++;
                ct++;
                s.at(i)=toupper(s.at(i));
            }
        }
        cout p ct p "\n" p s p "\n";
    }
    return 0;
}