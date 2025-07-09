#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    int op[6];
    op[0]=a[0]+a[1]+a[2];
    op[1]=a[0]*a[1]*a[2];
    op[2]=a[0]*(a[1]+a[2]);
    op[3]=(a[0]+a[1])*a[2];
    op[4]=a[0]*a[1]+a[2];    
    op[5]=a[0]+a[1]*a[2];
    int mx=0;
    for(int i=0; i<6; ++i){
        op[i]>mx?mx=op[i]:mx;
    }
    cout<<mx<<"\n";
    /*
    a b c
    1 1 1 
    a+b+c
    a*b*c
    a*(b+c)
    (a+b)*c
    a*b+c
    a+b*c
    */
    return 0;
} 
