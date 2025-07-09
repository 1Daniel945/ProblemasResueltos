#include <iostream>
using namespace std;

int main(){
    long long t,a,b,n;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>n;
        long long t=0;
        while (a<=n && b<=n)
        {
            if(a>=b){
                b+=a;
                t++;
            }
            else{
                a+=b;
                t++;
            }
        }
        cout<<t<<"\n";
    }
    return 0;
}