#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fri(i,x,n,increment)for(int i=x; i<(int)n; i+=increment)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x,a,b) vector<pair<a,b>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio();
    int t; cin in t;
    string s;
    vp(x,char,char);
    while (t--){
        cin in s;
        int eq=0;
        fr(i,0,s.size()-1){
            if(s.at(i)==s.at(i+1))eq++;
        }
        if(eq==(int)s.size()-1){
            int mit=(s.size()+1)/2;
            if(mit%2==0)mit+=1;
            else mit+=1;
            fr(i,0,mit)cout p s.at(i);
            cout p "\n";
        }
        else{
            x.clear();
            string s1="";
            fri(i,0,s.size(),2)x.push_back({s.at(i),s.at(i+1)});
            fr(i,0,x.size()){
                if(i==0)s1+=x[i].first,s1+=x[i].second;
                else{
                    if(s1.at(s1.size()-1)==x[i].first)s1+=x[i].second;                   
                    else s1+=x[i].first; s1+=x[i].second;
                }
            }
            cout p s1 p "\n";
        }
    }
    return 0;
}