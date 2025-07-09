#include <iostream>
using namespace std;
int mt[200][200];
int main()
{
    int t,n,m,k,xv,yv;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        int x[k];
        int y[k];
        for(int i=0; i<k; i++){
            cin>>x[i]>>y[i];
        }
        cin>>xv>>yv;
        //Marcar las posiciones de los amigos
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                for(int s=0; s<k; s++){
                    mt[x[s]-1][y[s]-1]=1;
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout<<mt[i][j]<<" ";
            }
            cout<<"\n";
        }
        xv=xv-1;
        yv=yv-1;
        cout<<mt[xv][yv]<<"\n";
        if(mt[xv][yv]==1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}
