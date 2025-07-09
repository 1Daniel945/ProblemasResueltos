#include <bits/stdc++.h>
typedef long long lld;
using namespace std;

int main(){
    int t;
    cin>>t;
    lld n,c,v;
    while (t--)
    {
        cin>>n;
        v=n;
        c=0;
        for(lld i=1; i<=n; ++i){
            if(v>0 && v>=i){
                v=v-i;
                c++;
            }
            else{
                break;
            }
        }
        cout<<c<<"\n";
    }    
    return 0;
}