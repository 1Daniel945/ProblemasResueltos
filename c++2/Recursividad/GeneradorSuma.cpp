#include <iostream>
using namespace std;

int a[100];
int n,k,s=0,v=0;

void f(int pos, int s){
    if(s==k){
        v++;
        if(s==k){
            return;
        }
    }
    f(pos+1, s+a[pos]);//1, 1
    f(pos, s);
}

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>k;
    f(0,0);
    cout<<v<<"\n";
    return 0;
}