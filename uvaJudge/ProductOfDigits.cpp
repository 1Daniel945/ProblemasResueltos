#include <bits/stdc++.h>
#define fr(i,a,b)for(int i=a; i<b; ++i)
#define p <<
#define in >>
typedef long long ll;
using namespace std;

int main(){
    int t, n; cin in t;
    while (t--){
        cin in n;
        string s = "";
        if(n == 1)cout p "1\n";
        else{
            for(int i = 9; i>=2; --i){
                while(n % i == 0){
                    s += to_string(i);
                    n /= i;
                }
            }
            if(n > 9)cout p "-1\n";
            else{
                reverse(s.begin(), s.end());
                cout p s p "\n";
            }
        }
    }
    return 0;
}