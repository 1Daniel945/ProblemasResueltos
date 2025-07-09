#include <iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        long long s=0;
        long long v=8;
        for(long long i=1; i<=n/2; i++){
            s+=i*v;
            v+=8;
        }
        cout<<s<<"\n";
    }
    return 0;
}