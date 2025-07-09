#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m,v;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++){
        cin>>a[i];
    }
    sort(a, a+m);
    int mn=a[m-1]-a[0];
    for(int i=n; i<=m; i++){
        v=a[i-1]-a[i-n];
        v=abs(v);
        mn=min(mn,v);
    }
    cout<<mn<<"\n";
    return 0;
}