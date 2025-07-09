#include <iostream>
using namespace std;

int main(){
    long long t,a,b;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        if(a>b){
            if(a>(2*b)){
                cout<<a*a<<"\n";
            }
            else{
                b=2*b;
                cout<<b*b<<"\n";
            }
        }
        else{
            if(b>(2*a)){
                cout<<b*b<<"\n";
            }
            else{
                a=2*a;
                cout<<a*a<<"\n";
            }
        }
    }
    return 0;
}