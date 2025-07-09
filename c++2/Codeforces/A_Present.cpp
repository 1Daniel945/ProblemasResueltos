#include <bits/stdc++.h>
#define fi(x) for(int i=0; i<x; ++i)
using namespace std;

int main(){
    int n;
    cin>>n;
    pair<int, int>x[n];
    int v;
    fi(n){
        cin>>v;
        x[i].first=v;
        x[i].second=i+1;
    } 
    sort(x,x+n);  
    fi(n){
        cout<<x[i].second<<" ";
    }
    return 0;
}
/*
2 3 4 1
1 2 3 4 

p[1]=4
p[2]=1
p[3]=2
p[4]=3

1 3 2
1 2 3

p[1]=1
p[2]=3
p[3]=2

1 2
1 2
p[1]=1
p[2]=2

*/
 
