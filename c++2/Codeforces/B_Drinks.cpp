#include <bits/stdc++.h>
using namespace std;

int main(){
    double x,n,s=0;
    cin>>n;
    for(int i=0; i<n; ++i){
        cin>>x;
        s+=x;
    }
    printf("%.12lf",s/n);
    return 0;
}