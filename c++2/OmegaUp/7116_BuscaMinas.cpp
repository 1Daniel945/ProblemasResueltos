#include <iostream>
using namespace std;

char mtOc[105][105];

void imp(int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<mtOc[i][j];
        }
        cout<<"\n";
    }
}

int main(){
    int n,m,cb=0,b=0,ba=0;
    cin>>n>>m;
    char mt[n][m];
    int op[n];
    int x[n];
    int y[n];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mt[i][j];
            if(mt[i][j]=='@'){
                cb++;
            }
            mtOc[i][j]='#';
        }
    }
    int v[n][m];
    imp(n, m);
    bool win=0;
    for(int i=0; i<n; i++){
        cin>>op[i]>>x[i]>>y[i];
        if(op[i]==1){//Descubrir casillas
            if(mt[x[i]-1][y[i]-1]=='0'){
                //0
                if(mtOc[(x[i]-1)][(y[i]-1)]=='#'){//No permite descubri casilla con bandera
                    if(mt[(x[i]-1)][(y[i]-1)]=='@'){//Si descubre una casilla con bomba
                        mtOc[(x[i]-1)][(y[i]-1)]=mt[(x[i]-1)][(y[i]-1)];//Descubrir casilla
                        imp(n, m);
                        break;
                    }
                    else{
                        if(mtOc[(x[i]-1)][(y[i]-1)]=='#'){//Si descubre una casilla sin bomba
                            mtOc[(x[i]-1)][(y[i]-1)]=mt[(x[i]-1)][(y[i]-1)];//Destapa la casilla
                        }
                    }
                }
                //1
                if(mtOc[(x[i]-1)-1][(y[i]-1)-1]=='#'){//No permite descubri casilla con bandera
                    if(mt[(x[i]-1)-1][(y[i]-1)-1]=='@'){//Si descubre una casilla con bomba
                        mtOc[(x[i]-1)-1][(y[i]-1)-1]=mt[(x[i]-1)-1][(y[i]-1)-1];//Descubrir casilla
                        imp(n, m);
                        break;
                    }
                    else{
                        if(mtOc[(x[i]-1)-1][(y[i]-1)-1]=='#'){//Si descubre una casilla sin bomba
                            mtOc[(x[i]-1)-1][(y[i]-1)-1]=mt[(x[i]-1)-1][(y[i]-1)-1];//Destapa la casilla
                        }
                    }
                }
                //2
                if(mtOc[(x[i]-1)-1][(y[i]-1)]=='#'){//No permite descubri casilla con bandera
                    if(mt[(x[i]-1)-1][(y[i]-1)]=='@'){//Si se descubre donde hay bomba
                        mtOc[(x[i]-1)-1][(y[i]-1)]=mt[(x[i]-1)-1][(y[i]-1)];
                        imp(n, m);
                        break;
                    }
                    else{
                        if(mtOc[(x[i]-1)-1][(y[i]-1)]=='#'){
                            mtOc[(x[i]-1)-1][(y[i]-1)]=mt[(x[i]-1)-1][(y[i]-1)];
                        }
                    }
                }
                //3
                if(mtOc[(x[i]-1)-1][(y[i]-1)+1]=='#'){//No permite descubri casilla con bandera
                    if(mt[(x[i]-1)-1][(y[i]-1)+1]=='@'){//Si descubre una casilla con bomba
                        mtOc[(x[i]-1)-1][(y[i]-1)+1]=mt[(x[i]-1)-1][(y[i]-1)+1];//Descubrir casilla
                        imp(n, m);
                        break;
                    }
                    else{
                        if(mtOc[(x[i]-1)-1][(y[i]-1)+1]=='#'){//Si descubre una casilla sin bomba
                            mtOc[(x[i]-1)-1][(y[i]-1)+1]=mt[(x[i]-1)-1][(y[i]-1)+1];//Destapa la casilla
                        }
                    }
                }
                //4
                if(mtOc[(x[i]-1)][(y[i]-1)-1]=='#'){//No permite descubri casilla con bandera
                    if(mt[(x[i]-1)][(y[i]-1)-1]=='@'){//Si descubre una casilla con bomba
                        mtOc[(x[i]-1)][(y[i]-1)-1]=mt[(x[i]-1)][(y[i]-1)-1];//Descubrir casilla
                        imp(n, m);
                        break;
                    }
                    else{
                        if(mtOc[(x[i]-1)][(y[i]-1)-1]=='#'){//Si descubre una casilla sin bomba
                            mtOc[(x[i]-1)][(y[i]-1)-1]=mt[(x[i]-1)][(y[i]-1)-1];//Destapa la casilla
                        }
                    }
                }
                //5
                if(mtOc[(x[i]-1)][(y[i]-1)+1]=='#'){//No permite descubri casilla con bandera
                    if(mt[(x[i]-1)][(y[i]-1)+1]=='@'){//Si descubre una casilla con bomba
                        mtOc[(x[i]-1)][(y[i]-1)+1]=mt[(x[i]-1)][(y[i]-1)+1];//Descubrir casilla
                        imp(n, m);
                        break;
                    }
                    else{
                        if(mtOc[(x[i]-1)][(y[i]-1)+1]=='#'){//Si descubre una casilla sin bomba
                            mtOc[(x[i]-1)][(y[i]-1)+1]=mt[(x[i]-1)][(y[i]-1)+1];//Destapa la casilla
                        }
                    }
                }
                //6
                if(mtOc[(x[i]-1)+1][(y[i]-1)-1]=='#'){//No permite descubri casilla con bandera
                    if(mt[(x[i]-1)+1][(y[i]-1)-1]=='@'){//Si descubre una casilla con bomba
                        mtOc[(x[i]-1)+1][(y[i]-1)-1]=mt[(x[i]-1)-1][(y[i]-1)-1];//Descubrir casilla
                        imp(n, m);
                        break;
                    }
                    else{
                        if(mtOc[(x[i]-1)+1][(y[i]-1)-1]=='#'){//Si descubre una casilla sin bomba
                            mtOc[(x[i]-1)+1][(y[i]-1)-1]=mt[(x[i]-1)+1][(y[i]-1)-1];//Destapa la casilla
                        }
                    }
                }
                //7
                if(mtOc[(x[i]-1)+1][(y[i]-1)]=='#'){//No permite descubri casilla con bandera
                    if(mt[(x[i]-1)+1][(y[i]-1)]=='@'){//Si descubre una casilla con bomba
                        mtOc[(x[i]+1)+1][(y[i]-1)]=mt[(x[i]-1)+1][(y[i]-1)];//Descubrir casilla
                        imp(n, m);
                        break;
                    }
                    else{
                        if(mtOc[(x[i]-1)+1][(y[i]-1)]=='#'){//Si descubre una casilla sin bomba
                            mtOc[(x[i]-1)+1][(y[i]-1)]=mt[(x[i]-1)+1][(y[i]-1)];//Destapa la casilla
                        }
                    }
                }
                //8
                if(mtOc[(x[i]-1)+1][(y[i]-1)+1]=='#'){//No permite descubri casilla con bandera
                    if(mt[(x[i]-1)+1][(y[i]-1)+1]=='@'){//Si descubre una casilla con bomba
                        mtOc[(x[i]-1)+1][(y[i]-1)+1]=mt[(x[i]-1)+1][(y[i]-1)+1];//Descubrir casilla
                        imp(n, m);
                        break;
                    }
                    else{
                        if(mtOc[(x[i]-1)+1][(y[i]-1)+1]=='#'){//Si descubre una casilla sin bomba
                            mtOc[(x[i]-1)+1][(y[i]-1)+1]=mt[(x[i]-1)+1][(y[i]-1)+1];//Destapa la casilla
                        }
                    }
                }
            }
            else{//Descubrir una sola casilla
                if(mt[x[i]-1][y[i]-1]=='@' && mtOc[x[i]-1][y[i]-1]!='!'){//Descubrir casilla con bomba
                    break;
                }
                if(mtOc[x[i]-1][y[i]-1]=='#'){//Descubrir casilla
                    mtOc[x[i]-1][y[i]-1]=mt[x[i]-1][y[i]-1];
                }
                else{//En caso de descubrir una casilla descubierta
                    cout<<"operacion invalida\n";
                }
            }
        }
        if(op[i]==2){//Poner bandera
            if(mtOc[x[i]-1][y[i]-1]=='#'){//Colocar bandera
                mtOc[x[i]-1][y[i]-1]='!';
                b++;
                if(mt[x[i]-1][y[i]-1]=='@'){
                    ba++;     
                }
            }
            else if(mtOc[x[i]-1][y[i]-1]=='!'){//Quitar bandera
                b--;
                mtOc[x[i]-1][y[i]-1]='#';
                if(mt[x[i]-1][y[i]-1]=='@'){
                    ba--;
                }
            }
            else{
                cout<<"operacion invalida\n";
            }
        }
        imp(n, m);
        if((ba==cb && ba==b) && cb>0){
            cout<<"HAZ GANADO!";
            win=1;
            break;
        }
    }
    if(!win){
        if(b==cb){
            cout<<"HAZ GANADO!";
        }
        else{
            cout<<"UH OH HAS PERDIDO!\nGAME OVER\n";
        }
    }
    return 0;
}
