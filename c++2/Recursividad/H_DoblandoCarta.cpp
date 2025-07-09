#include <bits/stdc++.h>
using namespace std;

int a,b,c,d,t=0;

int op1(int a){
    t++;
    return a/2;
}

int op2(int b){
    t++;
    return b/2;
}

void doblez(int m, int n){
    int x=op1(a);
    m=x*b;
    if(m<=n)return;
    m=x*op2(b);
    doblez(m,n);
}

int main(){
    cin>>a>>b>>c>>d;
    int m1,m2,ct;
    m1 = a*b;
    m2 = d*c;
    if(m1==m2){
        cout<<"0\n";
    }
    else{
        doblez(m1,m2);
        if(t<8){
            cout<<t<<"\n";
        }
        else{
            cout<<"-1\n";
        }
    }
    return 0;
}