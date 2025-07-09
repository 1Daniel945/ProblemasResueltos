#include <bits/stdc++.h>
#define fi(x)for(int i=0; i<x; ++i)
#define fj(x)for(int j=0; j<x; ++j)
#define fk(x)for(int k=0; k<x; ++k)
#define fir(x,n)for(int r=x-1; r>=n; --r)
#define in >>
#define p <<
#define vi(v) vector<int>v; 
#define psi(t,x) for(pair<string,int>t:x)
#define yesNo(x,y) x==y?cout p "YES\n": cout p "NO\n";
using namespace std;

int main(){
    int t,n;cin in t;
    while (t--)
    {
        string s,s1;cin in s in n;
        string a[2];
        fi(2)cin in a[i];
        s1=s;
        fj(2){ 
            fi(a[j].size()){
                vi(v);
                if(s.find(a[j].at(i))!=string::npos){
                    v.push_back(s.find(a[j].at(i)));
                    s.at(s.find(a[j].at(i)))='#';      
                }
                fk(v.size()){
                    cout<<v[k]<<" "<<j<<" \n";
                }
            }
        }
    }
    return 0;
}