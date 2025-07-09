#include <bits/stdc++.h>
typedef long long ll;
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=n-1; i(int)>=x; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<char,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
#define mst(a,b)memset(a,b,sizeof(a));
using namespace std;

int mx=0;
int c=0;

void x(int n){
    c++;
    if(n==1){
        mx = max(c,mx);
        c = 0;
        return;
    }
    if(n%2==1)n*=3,n+=1;
    else n/=2;
    x(n);
}

int main(){
    int a,b;
    //ofstream outfile("tax.txt");
    while(cin in a in b){
        int a1 = max(a,b);
        int b1 = min(a,b); 
        mx=0;
        fr(i,b1, a1+1){
            x(i);
        }
        //outfile 
        cout p a p " " p b p " " p mx p"\n";
    }
    //outfile.close();
    return 0;
}
