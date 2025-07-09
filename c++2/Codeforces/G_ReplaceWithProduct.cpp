#include <bits/stdc++.h>
using namespace std;

/*int main(){
    int t,ta,l,r,m1=0,m2=0,ps=0,ps2=0;
    string s1="";
    cin>>t;
    while (t--)
    {
        cin>>ta;
        int a[ta];
        int b[ta];
        int c=0;
        int m=0,s=0;
        for(int i=0; i<ta; i++){
            cin>>a[i];
            b[i]=a[i];
        }
        for(int i=0; i<ta; i++){
            int t=a[i];
            if(a[i+1]==t){
                c++;
            }
        }
        if(c!=ta-1){
        //Obtener valor l
        int *mx = max_element(a, a+sizeof(a)/sizeof(a[0]));
        
        for(int i=0; i<ta; i++){
            if(b[i]==*mx){
                b[i]=0;
                ps=i+1;
                break;
            }
        }

        int *mx2 = max_element(b,b+sizeof(b)/sizeof(b[0]));

        for(int i=0; i<ta; i++){
            if(b[i]==*mx2){
                b[i]=0;
                ps2=i+1;
                break;
            }
        }

        if(*mx==*mx2){
            ps2=*mx;
        }

        ps<ps2?cout<<ps<<" "<<ps2<<"\n":cout<<ps2<<" "<<ps<<"\n";
    }
    return 0;
}*/

int main(){
    int t,n,x;
    cin>>t;
    while (t--)
    {   
        cin>>n;
        vector<int>v;
        for(int i=0; i<n; i++){
            cin>>x;
            v.push_back(x);
        }
        for(int i=0; i<n; i++){
            
        }
    }
    return 0;
}