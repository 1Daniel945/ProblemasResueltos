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
    int t,a,b,n;cin in t;
    while(t--){
        cin in n in a in b;
        int s1=0,s2=0,s3=0;
        //Op1
        s1=a*n;
        //Op2
        int x1=n,c=0;
        if(n%2==0){
            while (x1>=2){
                x1-=2;
                c++;
            }
        }
        s2+=c*b;
        int cx=n/2;
        s3+=cx*b;
        n-=cx*2;
        int cx1=0;
        while(n--){
            cx1++;
        }
        cx1*=a;
        s3+=cx1;       
        v(vt,int);
        vt.push_back(s1);
        if(s2>0)vt.push_back(s2);
        vt.push_back(s3);
        sort(vt.begin(),vt.end());
        cout p vt[0] p "\n";
    }
    return 0;
}