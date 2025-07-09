#include <iostream>
typedef long long ll;
using namespace std;

int main(){
    int t;
    ll a,b; 
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        if(a>b){
            cout<<">\n";
        }
        else if(b>a){
            cout<<"<\n";
        }
        else if(a==b){
            cout<<"=\n";
        }
    }
    return 0;
}