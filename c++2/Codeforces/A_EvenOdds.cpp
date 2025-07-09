#include<bits/stdc++.h>
typedef long long ll;
#define fi(x) for(ll i=1; i<=x; ++i)
using namespace std;

int main(){
    ll n,k;
    cin>>n>>k;
    cout<<n<<" "<<k<<"\n";
    string s="";
    while (n--)
    {
        if(n%2==0){
            s+=n;
        }
    }
    cout<<s<<"\n";
    return 0;
}