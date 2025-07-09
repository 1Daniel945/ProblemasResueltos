#include <bits/stdc++.h>
#define fi(x) for(int i=0; i<x; ++i)
#define fj(x) for(int j=0; j<x; ++j)
#define fk() for(int k=0; k<=9; ++k)
#define fl() for(int l=9; l>=0; --l)
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int a[n],x;
        string s[n];
        fi(n){
            cin>>a[i];
        }
        fi(n){
            cin>>x;
            cin>>s[i];
        }
        vector<string>vs;
        //Recorrer arreglo de n
        fi(n){
            fk(){
                x=k;
                fj(s[i].size()){
                    if(x==0){
                        x=9;
                    }
                    if(s[i].at(j)=='U'){
                        x++;
                    }
                    if(s[i].at(j)=='D'){
                        x--;
                    }   
                }
                cout<<x<<"\n";
            }
        }
    }
    return 0;
}