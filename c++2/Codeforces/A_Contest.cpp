#include<bits/stdc++.h>
#define fi(x) for(int i=0; i<x; ++i)
#define impr(x,y) x==y?cout<<"Tie\n":x>y?cout<<"Misha":cout<<"Vasya"
using namespace std;

int main(){
    int a[4];
    fi(4)cin>>a[i];
    int x,x1;
    x=max(((3*a[0])/10),(a[0]-(a[0]/250)*a[2]));
    x1=max(((3*a[1])/10),(a[1]-(a[1]/250)*a[3]));
    impr(x,x1);
    return 0;
}
/*
    Ecuación
    max(3(a or b)/10, ((a or b)-((a or b)/250)) *(c or d))
*/ 
