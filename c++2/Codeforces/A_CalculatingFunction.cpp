#include <iostream>
typedef long long lld;
using namespace std;

int main(){
    lld n;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<"\n";
    }
    else{
        cout<<(n-1)/2-n<<"\n";
    }
    return 0;
}