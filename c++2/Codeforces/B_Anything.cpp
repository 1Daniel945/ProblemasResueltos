#include <iostream>
using namespace std;

void print(int n){
    for(int i=0;i<=n;i++){
        cout<<i<<" ";
    }
    for(int i=n-1;i>=0;i--){
        if(i!=0){
            cout<<i<<" ";
        }
        else{
            cout<<i;
        }
    }
}

void space(int n){
    for(int i=0;i<n;i++){
        cout<<" ";
    }
}

int main() {
    int n;
    cin>>n;
    for(int i=0; i<=n; i++){
        space(n*2-i-i);
        print(i);
        cout<<"\n";
    }
    for(int i=1; i<=n; i++){
        space(i*2);
        print(n-i);
        cout<<"\n";
    }
    return 0;
}
