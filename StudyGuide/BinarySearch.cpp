#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Ingresa la cantidad de elementos\n";
    int n;cin>>n;
    int a;
    vector<int>v;
    for(int i=0; i<n; ++i){
        cin>>a;
        v.push_back(a);
    }    
    cout<<"Ingresa el elemento a encontrar\n";
    int x;cin>>x;
    //Method 1
    int a=0,b=n-1;
    while (a<=b){
        //go divide range of search
        int k=(a+b)/2;
        if(v[k]==x)cout<<"index found\n";
        if(v[k]>x)b=k-1;
        else a=k+1;
    }
    return 0;
}