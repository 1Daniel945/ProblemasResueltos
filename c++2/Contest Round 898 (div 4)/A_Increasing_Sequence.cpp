#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0; i<n; ++i){
            cin>>a[i];
            b[i]=a[i];
        }
        int at=0,x=1,c=0;
        while (true)
        {
            if(c==n){
                break;
            }
            else{
                if(a[c]==b[c]&&c>0){
                    at=a[x-1];
                    while (b[c]==a[c])
                    {
                        b[c]++;
                    }
                    a[x]=at;
                }
                else{
                    c++;
                }
                x++;
            }
        }
        
        for(int i=0; i<n; ++i){
            cout<<b[i]<<"\n";
        }
        cout<<b[n-1]<<"\n";
    }
}