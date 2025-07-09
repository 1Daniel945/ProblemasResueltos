#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n,inc)for(int i=x; i<(int)n; i+=inc)
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
    fastio();
    int n,x;
    cin in n in x;
    string s1,s2,s3="";
    cin in s1 in s2;
    int t=x%n;
    while(t--){
        char c=s1.back();
        s1.pop_back();
        s3=c;
        s3+=s1;
        s1=s3;
    } 
    int c=0;
    fr(i,0,s1.size()){
        if(s1.at(i)!=s2.at(i))c++;
    }
    cout p c p "\n";
    return 0;
}