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
    /*int n;cin>>n;
    int a[n];
    int one=0,two=0,sm=0;
    bool isOne=0,isTwo=0;
    fr(i,0,n)cin in a[i];
    fr(i,0,n){
        if(a[i]==1){
            one++;
            isOne=1;
        }
        if(a[i]==2){
            two++;
            isTwo=1;
        }
        if(one==two){
            sm=one+two;
        }
    }
    cout p sm p "\n";*/
    int n;cin in n;
    int a[n];
    fr(i,0,n)cin in a[i];
    int v=a[0];
    int mx=0,c=0,c2=0;
    fr(i,0,n){
        if(a[i]==v){
            c++;
        }
        else{
            c2++;
        }
        if(c2<c){   
            mx=c2;
        }
        else{
            mx=c;
        }
    }
    cout p mx p "\n";
    return 0;
}