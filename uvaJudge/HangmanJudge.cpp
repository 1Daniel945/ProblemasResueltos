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

int main(){
    fastio()
    int n;
    string s,s1;
    fastio()
    while(cin in n, n!=-1){
        cin in s in s1;
        string s2,s3;      
        fr(i,0,s.size()){
            if(s2.find(s.at(i))==string::npos){
                s2+=s.at(i);
            }
        }
        fr(i,0,s1.size()){
            if(s3.find(s1.at(i))==string::npos){
                s3+=s1.at(i);
            }
        }
        int x = 0;
        fr(i, 0, s3.size()){
            if(s2.find(s3.at(i))!=string::npos){
                s2.at(s2.find(s3.at(i)))='#';
                if(count(s2.begin(), s2.end(), '#') == (int) s2.size()){
                    break;
                }
            }
            else x++;
            if(x == 7) break;
        }
        if(x < 7 && count(s2.begin(), s2.end(), '#') == (int) s2.size()){
            cout p "Round " p n p "\nYou win.\n";
        }
        else if(x < 7 && count(s2.begin(), s2.end(), '#') < (int) s2.size()){
            cout p "Round " p n p "\nYou chickened out.\n";
        }
        else cout p "Round " p n p "\nYou lose.\n";
    }
    return 0;
}