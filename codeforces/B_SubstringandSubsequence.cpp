#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

int mx = 0, ct = 0;
bool mark[27];
vector<vector<int>>adj;

void f(){
    fr(i, 0, mx){
        if(find(adj[i].begin(), adj[i].end(), i + 1) == adj[i].end()){
            ct++;            
        }
    }
}

int main(){
    int t; cin in t;
    char sp;
    cin in sp;
    fr(i, 0, t){
        string s, s1="";
        cin in sp;
        while(getline(cin, s), !s.empty()){
            if(s1.empty())s1=s;
        }
        cout p s1 p "p\n";
        adj.clear();
    }
    return 0;
}