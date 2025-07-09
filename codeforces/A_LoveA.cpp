#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<n; ++i)
#define fi(i,x,n)for(int i=n-1; i>=x; --i)
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
    int t,n;cin in t;
    while (t--)
    {
        cin in n;
        int a[n];
        int c=0,ct1=0;
        fi(i,0,n){  
            cin in a[i];
            if(a[i]==0){
                c++;
            }
            else{
                ct1++;
            }
        }
        if(c>0&&ct1>=2){
            int x=0;
            v(v,int);
            int ps=-1;
            fr(i,1,n){
                if(ps==-1&&(a[i]==0&&a[i-1]==1)){
                    ps=i;
                }
                if(ps!=-1){
                    v.push_back(ps);
                    ps=-1;
                }
            }
            fr(i,0,v.size()){
                bool u=0;
                int c=0;
                fr(j,v[i],n){
                    if(a[j]==0){
                        c++;
                    }
                    else{
                        u=1;
                        break;
                    }
                }
                if(u){
                    x+=c;
                }
            }
            cout p x p "\n";
        }
        else{
            cout p "0\n";
        }
    }
    return 0;
}
