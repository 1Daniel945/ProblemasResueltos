#include <bits/stdc++.h>
#define fr(i,a,b) for(int i=a; i<b; ++i)
#define in >> 
#define p <<
typedef unsigned long long ull;
using namespace std;

int main(){
    int n,u,d;
    cin in n in u in d;
    int c=0,x=0;
    while(x<n){
        c++;
        x+=u;
        if(c%2==0)x-=d,c++;
    }
    cout p c p "\n";
    return 0;
}