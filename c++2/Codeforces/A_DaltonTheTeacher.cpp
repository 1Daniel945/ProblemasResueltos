#include <iostream>
using namespace std;

int o(int p[], int n, int s[]){
    int v=0;
    for(int i=0; i<n; i++){
        if(p[i]!=s[i]){
            v++;
        }
    }
    return v;
}

int ps=0;
bool pm=0;

bool c(int p[], int n, int s[]){
    if(o(p,n,s)==n){
        return true;    
    }
    else{
        pm=1;
        int a = p[ps];
        int b = p[ps+1];
        swap(p[ps], b);
        swap(p[ps+1], a);
        ps+=1;
        return false;
    }
}

int main(){
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int p[n],m=0;
        ps=0;
        int s[n];
        for(int i=0; i<n; i++){
            cin>>p[i];
            s[i]=i+1;
        }
        while (c(p,n,s)!=true) 
        {
            m++;
        }              
        pm==0?cout<<"0\n":cout<<m<<"\n";
    }   
    return 0;
}