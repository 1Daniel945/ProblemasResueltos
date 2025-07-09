#include <iostream>
using namespace std;

void op(int l, int r, int v, int a[]){
    for(int i=l-1; i<r; i++){
        a[i]+=v;
    }
}

int main(){
    int n,k,l,r,v;
    cin>>n>>k;
    int a[n]{0}; 
    for(int i=0; i<k; i++){
        cin>>l>>r>>v;
        op(l, r, v, a);
    }   
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}