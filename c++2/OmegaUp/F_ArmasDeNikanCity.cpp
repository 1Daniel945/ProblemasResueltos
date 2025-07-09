#include<iostream>
using namespace std;

int main(){
    int n,p;
    cin>>n;
    int pa[n];
    string s[n];
    for(int x=0; x<n; x++){
        cin>>s[x];
        cin>>pa[x];
    }
    cin>>p;
    string f[p],st;
    for(int i=0; i<p; i++){
        cin>>f[i];
    }
    int t;
    int c[p]{0};
    int m[p]{0};
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            t=f[j].size();
            st=s[i].substr(0,t);
            if(st==f[j]){
                c[j]++;
                if(m[j]==0){
                    m[j]=pa[i];
                }
                else{
                    if(pa[i]>m[j]){
                        m[j]=pa[i];
                    }
                }
            }
        }
    }
    for(int i=0; i<p; i++){
        cout<<c[i]<<" "<<m[i]<<"\n";
    }
    return 0;
}