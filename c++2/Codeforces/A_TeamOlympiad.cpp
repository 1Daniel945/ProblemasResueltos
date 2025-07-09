#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,n1=0,n2=0,n3=0;
    cin>>n;
    int a[n];
    vector<int>p;
    vector<int>mt;
    vector<int>e;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==1){
            n1++;
            p.push_back(i+1);
        }
        else if(a[i]==2){
            n2++;
            mt.push_back(i+1);
        }
        else if(a[i]==3){
            n3++;
            e.push_back(i+1);
        }
    }
    if(n1==0 || n2==0 || n3==0){
        cout<<"0\n";
    }
    else{
        int m=0;
        if(n1<=n2 && n1<=n3){
            m=n1;
        }
        else if(n2<=n1 && n2<=n3){
            m=n2;
        }
        else if(n3<=n1 && n3<=n2){
            m=n3;
        }
        cout<<m<<"\n";
        for(int i=0; i<m; i++){
            cout<<p[i]<<" "<<mt[i]<<" "<<e[i]<<"\n";
        }
    }
    return 0;
}