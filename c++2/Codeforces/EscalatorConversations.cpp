#include <iostream>
using namespace std;

int main(){
    int t,n,m,k,h;
    cin>>t;
    while (t--)
    {
        int c=0;
        cin>>n>>m>>k>>h;
        int p[n];
        for(int i=0; i<n; i++){
            cin>>p[i];
        }
        int v;
        for(int i=1; i<=n; i++){
            v=k*i;
            for(int j=0; j<n; j++){
                if(p[j]>h && (p[j]-h)==v){
                    c++;
                } 
                if((h-p[j])==v && h>p[j]){
                    c++;
                }
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}

/*m = 9 k = 5 H = 6 h[11 9]

k*i = 5*1 = 5 [11-6] = 5

n=5 m=3 k=3 H=11 h[5, 4, 14, 18, 2]

k*i = 3*2 = 6 = [11-5] = 6

k*i = 3*3 = 9 = [14-5] = 9 

n = 5 m = 3 k = 3 H = 1 h[5, 4, 14, 18, 2]

k*i = 3*1 = 3 = [5-1] = 4

k*i = 3*2 = 6 = [14-1] = 13 

*/