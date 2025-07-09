#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
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
    fastio()
    ofstream archive;
    archive.open("text.txt");
    double n; cin in n;
    n=ceil(n/2);
    int c = n, c1 = 1;
    fr(i,0,n){
        fr(j,0,c-1)archive p " ";
        c--;
        fr(x,0,c1)archive p "@";
        c1+=2;
        if(i<n-1)archive p "\n"; 
    }
    archive.close();
    return 0;
}


