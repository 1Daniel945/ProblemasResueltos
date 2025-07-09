#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;   
    cin>>t;
    while (t--)
    {
        char mt[10][10];
        int s=0,c1=0,c2=0,c3=0,c4=0,c5=0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                cin>>mt[i][j];
            }
        }
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if(mt[0][j]=='X'){
                    c1++;
                }        
                if(mt[9][j]=='X'){
                    c1++;
                }
                if((i>0 && i<9)&& mt[i][0]=='X'){
                    c1++;
                }
                if((i>0 && i<9)&& mt[i][9]=='X'){
                    c1++;
                }
                if((j>0 && j<9)&& mt[1][j]=='X'){
                    c2++;
                }
                if((j>0 && j<9)&& mt[8][j]=='X'){
                    c2++;
                }
                if((i>1 && i<8)&& mt[i][1]=='X'){
                    c2++;
                }
                if((i>1 && i<8)&& mt[i][8]=='X'){
                    c2++;
                }
                if((j>1 && j<8)&& mt[2][j]=='X'){
                    c3++;
                }
                if((j>1 && j<8)&& mt[7][j]=='X'){
                    c3++;
                }
                if((i>2 && i<7)&& mt[i][2]=='X'){
                    c3++;
                }
                if((i>2 && i<7)&& mt[i][7]=='X'){
                    c3++;
                }
                if((j>2 && j<7)&& mt[3][j]=='X'){
                    c4++;
                }
                if((j>2 && j<7)&& mt[6][j]=='X'){
                    c4++;
                }
                if((i>3 && i<6)&& mt[i][3]=='X'){
                    c4++;
                }
                if((i>3 && i<6)&& mt[i][6]=='X'){
                    c4++;
                }
                if((j>3 && j<6)&& mt[4] [j]=='X'){
                    c5++;
                }
                if((j>3 && j<6)&& mt[5] [j]=='X'){
                    c5++;
                }
            }
        }
        c1=(c1/10)*1;
        c2=(c2/10)*2;
        c3=(c3/10)*3;
        c4=(c4/10)*4;
        c5=(c5/10)*5;
        s=c1+c2+c3+c4+c5;
        cout<<s<<"\n";
    }
    
}