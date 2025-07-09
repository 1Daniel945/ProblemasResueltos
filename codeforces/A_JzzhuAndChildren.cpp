#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=n-1; i>=x; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<char,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
#define mst(a,b)memset(a,b,sizeof(a));
typedef long long ll;
using namespace std;

int main(){
    fastio()
    int n,m,a;cin in n in m;
    queue<pair<int,int>>st;
    fr(i,1,n+1)cin in a, st.push({i,a}); 
    int rs=0;
    while (!st.empty()){
        if(st.size()==1)rs=st.front().first;
        if(st.front().second<=m)st.pop();
        else{
            int x=st.front().second-m;
            pair<int,int>pi;
            pi.first=st.front().first;
            pi.second=x;
            st.push({pi.first,pi.second});
            st.pop();
        }
    }
    cout p rs p "\n";
    return 0;
}