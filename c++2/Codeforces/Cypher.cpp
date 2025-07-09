#include <iostream>
using namespace std;

int main(){
    int t,n,x;
    cin>>t;
    while (t--)//O(t)
    {
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){ //O(n^2)
            cin>>a[i];
        }
        char c;
        for(int i=0; i<n; i++){
            cin>>x;
            for(int j=0; j<x; j++){
                cin>>c;
                if(c=='U'){
                    if(a[i]==9){

                    }
                }
                if(c=='D'){
                    if(a[i]==9){

                    }
                }
            }
            cin.ignore();
        }
    }   
    return 0;
}