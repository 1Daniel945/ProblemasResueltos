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
    int n,a;
    cin in n;
    v(x,int);v(y,int);v(z,int);
    fr(i,0,n)cin in a,x.push_back(a),y.push_back(a);
    if(is_sorted(x.begin(),x.end()))cout p "yes\n1 1\n";
    else{
        sort(y.begin(),y.end());
        int ps=-1,ps2=-1;
        //find first position where both position are diferent
        fr(i,0,n){
            if(y[i]!=x[i]){
                ps=i;
                break;
            }
        }
        //find second position where both position are diferent
        fr(i,ps,n){
            if(y[i]!=x[i])ps2=i+1;
        }
        /*
            funciona pero no siempre
            int x1=(((n-1)-ps)-ps2);
            reverse(x.begin()+ps,x.end()-x1);
        */
        //z tiene los valores normales
        fr(i,ps,ps2){
            z.push_back(x[i]);
        }       
        reverse(z.begin(),z.end());
        int j=0;
        fr(i,ps,ps2){
            x[i]=z[j];
            j++;
        }
        if(is_sorted(x.begin(),x.end()))cout p "yes\n" p ps+1 p " " p ps2 p "\n";
        else cout p "no\n";
    }
    return 0;
}