#include <iostream>
using namespace std;

int main(){
    int t,n,x,y,im=0,p=0;
    cin>>t;
    while (t--){
        cin>>n>>x>>y;
        int p,i;
        n!=1?p=n/2,im=(n/2)+1:p;
        n==1?p=0, im:n;
        ((p<=x && im<=y)&& x+y>=n)?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}