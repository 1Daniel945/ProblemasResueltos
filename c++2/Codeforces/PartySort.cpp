#include<iostream>
#include<map>
using namespace std;

int main(){
    int t,n,v,p;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int a[n];
        int mx=0,mn=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]>mx){
                mx=a[i];
            }
        }
        mn=mx;
        for(int i=0; i<n; i++){
            if(a[i]<mn){
                mn=a[i];
                p=i;
            }
        }
        for(int i=0; i<n; i++){
            if(i==0){
                v=a[i];
                swap(a[i], mn);
                swap(a[p], v);
            }
        }
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        int c=0;
        for(int i=0; i<n; i++){
            if(i+1<n){
                if(a[i]<a[i+1]){
                    c++;
                }
            }
            else{
                if(a[n-1]>a[i-1]){
                    c++;
                }
            }
        }
        if(n>1){
            if(c==n){
            cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"YES\n";
        }
    }
    
    return 0;
}