#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;
 
int main(){
    fastio
    string s;
    while(cin in s){        
        int last = - 1;
        string x = "";
        string f = "BFPVCGJKQSXZDTLMNR";
        fr(i, 0, s.size()){
            if(last != 1 && (s.at(i) == 'B' || s.at(i) == 'F' || s.at(i) == 'P' || s.at(i) == 'V')){
                x += "1";
                last = 1;
            }
            else if(last != 2 && (s.at(i) == 'C' || s.at(i) == 'G' || s.at(i) == 'J' || s.at(i) == 'K'
                || s.at(i) == 'Q' || s.at(i) == 'S' || s.at(i) == 'X' || s.at(i) == 'Z')){
                x += "2";
                last = 2;
            }    
            else if(last != 3 && (s.at(i) == 'D' || s.at(i) == 'T')){
                x += "3";
                last = 3;
            }
            else if(last != 4 && s.at(i) == 'L'){
                x += "4";
                last = 4;
            }
            else if(last != 5 && (s.at(i) == 'M' || s.at(i) == 'N')){
                x += "5";
                last = 5;
            }
            else if(s.at(i) == 'R' && last != 6){
                x += "6";
                last = 6;
            }
            else if(f.find(s.at(i)) == string::npos){
                last = 0;
            }
        }
        cout p x p "\n";
    }
    return 0;
}
