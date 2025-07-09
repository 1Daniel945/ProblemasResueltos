#include <bits/stdc++.h>
using namespace std;

void s(double a, double b){
    cout<<a+b<<"\n";
}

void r(double a, double b){
    cout<<a-b<<"\n";
}

void m(double a, double b){
    cout<<a*b<<"\n";
}

void d(double a, double b){
    (a!=0 && b!=0)?cout<<a/b<<"\n":cout<<"0\n";
}

void f(int a){
    int v=0,v1=0;
    for(int i=1; i<a+1; i++){
        v=i;
        v1=+v*i;
        /*1*2*3*4*5
        1 3 6 24 120*/
        cout<<v1<<"\n";
    }
}

int p(int a, int b){
    return pow(a,b);
}

int main(){
    int n;
    double a,b;
    while (true)
    {
        cin>>n;
        if(n==1){
            cin>>a>>b;
            s(a,b);
        }
        if(n==2){
            cin>>a>>b;
            r(a,b);
        }
        if(n==3){
            cin>>a>>b;
            m(a,b);
        }
        if(n==4){
            cin>>a>>b;
            d(a,b);
        }
        if(n==5){
            int x;
            cin>>x;
            f(x);
        }
        if(n==6){
            cin>>a>>b;
            cout<<p(a,b)<<"\n";
        }
        if(n==7){
            break;
        }
    }
    return 0;
}