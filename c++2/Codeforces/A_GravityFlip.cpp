#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    vector<int>vt;
    for(int i=0; i<n; ++i){
        cin>>x;
        vt.push_back(x);
    }
    sort(vt.begin(),vt.end());
    for(int e: vt){
        cout<<e<<" ";
    }
    cout<<"\n";
    return 0;
}