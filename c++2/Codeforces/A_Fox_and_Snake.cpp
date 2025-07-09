#include <bits/stdc++.h>
#define fri(x,n) for(int i=0; i<n; ++i)
#define frj(x,n) for(int j=0; j<n; ++j)
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    char mt[n][m];
    fri(0,n){
        frj(0,m){
            mt[i][j]='#';
        }
    }

    fri(0,n){
        frj(0,m){
            if(i%2==1){
                mt[i][j]='.';
            }
        }
    }   

    bool bd=0;

    fri(0,n){
        if(i%2==1 && bd==0){//Primera 
            mt[i][m-1]='#';
            bd=1;
        }
        else if(i%2==1 && bd==1){//ultima
            mt[i][0]='#';
            bd=0;
        }
    }
    
    fri(0,n){
        frj(0,m){
            cout<<mt[i][j];
        }
        cout<<"\n";
    }
    return 0;
}