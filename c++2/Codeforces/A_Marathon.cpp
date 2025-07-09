#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a[4],x=0;
        for(int i=0; i<4; ++i){
            cin>>a[i];
            if(i>0 && a[i]>a[0]){
                x++;
            }
        }
        cout<<x<<"\n";   
    }
    return 0;
}