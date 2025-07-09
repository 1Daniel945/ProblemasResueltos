#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=x-1; i>=(int)n; --i)
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
    int n;
    while(cin in n,n!=0){
        string s=to_string(n);
        if(s.size()==1){
            cout p s p "\n";
        }
        else{
            while (s.size()>1){
                int s1=0;
                fr(i,0,s.size()){
                    s1+=s.at(i)-'0';
                }
                s=to_string(s1);
            }
            cout p s p "\n";
        }
    }
    return 0;
}