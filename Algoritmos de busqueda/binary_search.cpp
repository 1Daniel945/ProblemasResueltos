#include <bits/stdc++.h>
#define fi(x)for(int i=0; i<x; ++i)
#define fj(x)for(int j=0; j<x; ++j)
#define in >>
#define p <<
#define psi(t,x) for(pair<string,int>t:x)
using namespace std;

int n;
int a[500];

int busq_bin(int ini, int fin, int x){
    //Establecer condicion de paro
    if(ini==fin){
        if(a[ini]==x)return ini;
    }
    int md=(ini+fin)/2;
    if(a[md]>=x){
        return busq_bin(ini,md,x);
    }
    else{
        return busq_bin(md+1,fin,x);
    }
}

int main(){
    cin in n;
    fi(n)cin in a[i];
    cout p busq_bin(0,n,10) p"\n";
    return 0;
}