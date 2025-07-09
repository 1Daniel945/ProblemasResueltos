#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=n; --i)
#define in >>
#define my >=
#define mn <=
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
    int n,m,k;
    cin in n in m in k;
    int v;
    string as[m+1];
    fr(i,0,m+1){
        string s="00000000000000000000",s1="";
        cin in v;
        while(v>0){
            s1+=to_string(v%2);
            v/=2;
        }
        reverse(s1.begin(),s1.end());
        int x=s1.size()-1;
        fr(i,0,s1.size()){
            s.at((s.size()-1)-x)=s1.at(i);
            x--;   
        }
        as[i]=s;
    }
    int x=0,c;
    fr(i,0,m){
        c=0;
        fr(j,0,20){
            if(as[i].at(j)!=as[m].at(j)){
                c++;
            }
        }
        if(c <= k){
            x++;
        }
    }
    cout p x p "\n";
    return 0;
}

