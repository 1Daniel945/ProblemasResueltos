#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,mx=0;
    cin>>n;
    int a[n];
    vector<int>v;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        int s=0;
        for(int j=i; j<n; j++){
            s+=a[j];
            if(s>0){
                v.push_back(s);
            }
        }
    }
    for(int e: v){
        if(e>mx){
            mx=e;
        }
    }
    cout<<mx<<"\n";
    return 0;
}

