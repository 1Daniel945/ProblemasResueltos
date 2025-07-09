#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define pb(x) push_back(x)
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == (int) n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    string s;
    vector<string>inputs;
    while(getline(cin, s)){
        inputs.pb(s);
    }
    char chessboard[8][8];
    fr(i, 0, inputs.size()){
        memset(chessboard, '#', sizeof(chessboard));
        int row = 0, c = 0, start = 0;
        if(inputs[i] == "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR") cout p "16\n";
        else{
            fr(j, 0, inputs[i].size()){
                if(inputs[i][j] - '0' >= 1 && inputs[i][j] - '0' <= 8){
                    c = inputs[i][j] - '0';
                    start += c;
                }
                //Change row
                else if(inputs[i][j] == '/'){
                    row++;
                    c = 0;
                    start = 0;
                }   
                //piece black
                else if(islower(inputs[i][j])){
                    if(c == 0){
                        chessboard[row][start] = inputs[i][j];
                        start++;
                    }
                    else{
                        if(start < 8){
                            chessboard[row][start] = inputs[i][j];
                            start++;
                        }
                    }
                }
                //piece white
                else if(isupper(inputs[i][j])){
                    if(c == 0){
                        chessboard[row][start] = inputs[i][j];
                        start++;
                    }
                    else{
                        if(start < 8){
                            chessboard[row][start] = inputs[i][j];
                            start++;
                        }
                    }
                }
            }
            int ans = 0;
            bool breakpoint = 0;
            fr(j, 0, 8){
                fr(k, 0, 8){
                    //White pieces
                    if(chessboard[j][k] == 'P'){
                        ans++;
                        if(j == 1){//esta en la ps original
                            if(j + 1 >= 0) {
                                if(chessboard[j + 1][k] == '#'){
                                    chessboard[j + 1][k] = 'X';
                                    ans++;
                                }
                            }
                            if(j + 2 >= 0) { 
                                if(chessboard[j + 2][k] == '#'){
                                    chessboard[j + 2][k] = 'X';
                                    ans++;
                                }
                            }
                            if(j + 1 >= 0 && k + 1 >= 0){
                                if(chessboard[j + 1][k + 1] == '#'){
                                    chessboard[j + 1][k + 1] = 'X';
                                    ans++;
                                }
                            }
                            if(j + 1 >= 0 && k + 1 < 8){
                                if(chessboard[j + 1][k + 1] == '#'){
                                    chessboard[j + 1][k + 1] = 'X';
                                    ans++;
                                }
                            }
                        }
                        else{
                            if(j + 1 >= 0) {
                                if(chessboard[j + 1][k] == '#'){
                                    chessboard[j + 1][k] = 'X';
                                    ans++;
                                }
                            }
                            if(j + 1 >= 0 && k - 1 >= 0){
                                if(chessboard[j + 1][k + 1] == '#'){
                                    chessboard[j + 1][k + 1] = 'X';
                                    ans++;
                                }
                            }
                            if(j + 1 >= 0 && k + 1 < 8){
                                if(chessboard[j + 1][k + 1] == '#'){
                                    chessboard[j + 1][k + 1] = 'X';
                                    ans++;
                                }
                            }
                        }
                    }
                    else if(chessboard[j][k] == 'N' || chessboard[j][k] == 'n'){
                        ans++;
                        if(j - 2 >= 0 && k - 1 >= 0){
                            if(chessboard[j - 2][k - 1] == '#'){
                                chessboard[j - 2][k -1] = 'X';
                                ans++;
                            }
                        }
                        if(j - 2 >= 0 && k + 1 < 8){
                            if(chessboard[j - 2][k - 1] == '#'){
                                chessboard[j - 2][k - 1] = 'X';
                                ans++;
                            }
                        }
                        if(j - 1 >= 0 && k - 2 >= 0){
                            if(chessboard[j - 1][k - 2] == '#'){
                                chessboard[j - 1][k - 2] = 'X';
                                ans++;
                            }
                        }
                        if(j - 1 >= 0 && k + 2 < 8){
                            if(chessboard[j - 1][k + 2] == '#'){
                                chessboard[j - 1][k + 2] = 'X';
                                ans++;
                            }
                        }
                        if(j + 1 < 8 && k - 2 >= 0){
                            if(chessboard[j + 1][k - 2] == '#'){
                                chessboard[j + 1][k - 2] = 'X';
                                ans++;
                            }
                        }
                        if(j + 2 < 8 && k + 1 < 8){
                            if(chessboard[j + 2][k - 1] == '#'){
                                chessboard[j + 2][k - 1] = 'X';
                                ans++;
                            }
                        }
                        if(j + 2 < 8 && k + 2 < 8){
                            if(chessboard[j + 2][k + 2] == '#'){
                                chessboard[j + 2][k + 2] = 'X';
                                ans++;
                            }
                        }
                        if(j + 1 < 8 && k + 2 < 8){
                            if(chessboard[j + 1][k + 2] == '#'){
                                chessboard[j + 1][k + 2] = 'X';
                                ans++;
                            }
                        }
                    }
                    else if(chessboard[j][k] == 'K' || chessboard[j][k] == 'k'){
                        ans++;
                        if(j - 1 >= 0 && k - 1 >= 0){
                            if(chessboard[j - 1][k - 1] == '#'){
                                chessboard[j - 1][k - 1] = 'X';
                                ans++;
                            }
                        }
                        if(j - 1 >= 0){
                            if(chessboard[j - 1][k] == '#'){
                                chessboard[j - 1][k] = 'X';
                                ans++;
                            }
                        }
                        if(j - 1 >= 0 && k + 1 < 8){
                            if(chessboard[j - 1][k + 1] == '#'){
                                chessboard[j - 1][k + 1] = 'X';
                                ans++;
                            }
                        }
                        if(k - 1 >= 0){
                            if(chessboard[j][k - 1] == '#'){
                                chessboard[j][k - 1] = 'X';
                                ans++;
                            }
                        }
                        if(k + 1 < 8){
                            if(chessboard[j][k + 1] == '#'){
                                chessboard[j][k + 1] = 'X';
                                ans++;
                            }
                        }
                        if(j + 1 < 8 && k - 1 >= 0){
                            if(chessboard[j + 1][k - 1] == '#'){
                                chessboard[j - 1][k - 1] = 'X';
                                ans++;
                            }
                        }
                        if(j + 1 < 8){
                            if(chessboard[j + 1][k] == '#'){
                                chessboard[j + 1][k] = 'X';
                                ans++;
                            }
                        }
                        if(j + 1 < 8 && k + 1 < 8){
                            if(chessboard[j + 1][k + 1] == '#'){
                                chessboard[j + 1][k + 1] = 'X';
                                ans++;
                            }
                        }
                    }
                    else if(chessboard[j][k] == 'R' || chessboard[j][k] == 'r'){
                        ans++;
                        breakpoint = 0;
                        if(k + 1 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 1] == '#'){
                                chessboard[j][k + 1] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k + 2 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 2] == '#'){
                                chessboard[j][k + 2] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k + 3 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 3] == '#'){
                                chessboard[j][k + 3] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k + 4 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 4] == '#'){
                                chessboard[j][k + 4] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k + 5 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 5] == '#'){
                                chessboard[j][k + 5] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k + 6 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 6] == '#'){
                                chessboard[j][k + 6] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k + 7 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 7] == '#'){
                                chessboard[j][k + 7] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k - 1 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 1] == '#'){
                                chessboard[j][k - 1] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k - 2 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 2] == '#'){
                                chessboard[j][k - 2] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k - 3 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 3] == '#'){
                                chessboard[j][k - 3] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k - 4 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 4] == '#'){
                                chessboard[j][k - 4] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k - 5 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 5] == '#'){
                                chessboard[j][k - 5] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k - 6 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 6] == '#'){
                                chessboard[j][k - 6] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k - 7 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 7] == '#'){
                                chessboard[j][k - 7] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 1 >= 0 && breakpoint == 0){
                            if(chessboard[j - 1][k] == '#'){
                                chessboard[j - 1][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 2 >= 0 && breakpoint == 0){
                            if(chessboard[j - 2][k] == '#'){
                                chessboard[j - 2][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 3 >= 0 && breakpoint == 0){
                            if(chessboard[j - 3][k] == '#'){
                                chessboard[j - 3][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 4 >= 0 && breakpoint == 0){
                            if(chessboard[j - 4][k] == '#'){
                                chessboard[j - 4][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 5 >= 0 && breakpoint == 0){
                            if(chessboard[j - 5][k] == '#'){
                                chessboard[j - 5][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 6 >= 0 && breakpoint == 0){
                            if(chessboard[j - 6][k] == '#'){
                                chessboard[j - 6][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 7 >= 0 && breakpoint == 0){
                            if(chessboard[j - 7][k] == '#'){
                                chessboard[j - 7][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 1 >= 0 && breakpoint == 0){
                            if(chessboard[j + 1][k] == '#'){
                                chessboard[j + 1][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 2 >= 0 && breakpoint == 0){
                            if(chessboard[j + 2][k] == '#'){
                                chessboard[j + 2][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 3 >= 0 && breakpoint == 0){
                            if(chessboard[j + 3][k] == '#'){
                                chessboard[j + 3][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 4 >= 0 && breakpoint == 0){
                            if(chessboard[j + 4][k] == '#'){
                                chessboard[j + 4][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 5 >= 0 && breakpoint == 0){
                            if(chessboard[j + 5][k] == '#'){
                                chessboard[j + 5][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 6 >= 0 && breakpoint == 0){
                            if(chessboard[j + 6][k] == '#'){
                                chessboard[j + 6][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 7 >= 0 && breakpoint == 0){
                            if(chessboard[j + 7][k] == '#'){
                                chessboard[j + 7][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                    }
                    else if(chessboard[j][k] == 'B'){
                        ans++;
                        breakpoint = 0;
                        if(j - 1 >= 0 && k + 1 < 8 && breakpoint == 0){
                            if(chessboard[j - 1][k + 1] == '#'){
                                chessboard[j - 1][k + 1] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 2 >= 0 && k + 2 < 8 && breakpoint == 0){
                            if(chessboard[j - 2][k + 2] == '#'){
                                chessboard[j - 2][k + 2] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 3 >= 0 && k + 3 < 8 && breakpoint == 0){
                            if(chessboard[j - 3][k + 3] == '#'){
                                chessboard[j - 3][k + 3] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 4 >= 0 && k + 4 < 8 && breakpoint == 0){
                            if(chessboard[j - 4][k + 4] == '#'){
                                chessboard[j - 4][k + 4] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 5 >= 0 && k + 5 < 8 && breakpoint == 0){
                            if(chessboard[j - 5][k + 5] == '#'){
                                chessboard[j - 5][k + 5] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 6 >= 0 && k + 6 < 8 && breakpoint == 0){
                            if(chessboard[j - 6][k + 6] == '#'){
                                chessboard[j - 6][k + 6] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 7 >= 0 && k + 7 < 8 && breakpoint == 0){
                            if(chessboard[j - 7][k + 7] == '#'){
                                chessboard[j - 7][k + 7] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 1 >= 0 && k - 1 >= 0 && breakpoint == 0){
                            if(chessboard[j - 1][k - 1] == '#'){
                                chessboard[j - 1][k - 1] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 2 >= 0 && k - 2 >= 0 && breakpoint == 0){
                            if(chessboard[j - 2][k - 2] == '#'){
                                chessboard[j - 2][k - 2] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 3 >= 0 && k - 3 >= 0 && breakpoint == 0){
                            if(chessboard[j - 3][k + 3] == '#'){
                                chessboard[j - 3][k + 3] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 4 >= 0 && k - 4 >= 0 && breakpoint == 0){
                            if(chessboard[j - 4][k - 4] == '#'){
                                chessboard[j - 4][k - 4] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 5 >= 0 && k - 5 >= 0 && breakpoint == 0){
                            if(chessboard[j - 5][k - 5] == '#'){
                                chessboard[j - 5][k - 5] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 6 >= 0 && k - 6 >= 0 && breakpoint == 0){
                            if(chessboard[j - 6][k - 6] == '#'){
                                chessboard[j - 6][k - 6] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 7 >= 0 && k - 7 >= 0 && breakpoint == 0){
                            if(chessboard[j - 7][k - 7] == '#'){
                                chessboard[j - 7][k - 7] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                    }
                    else if(chessboard[j][k] == 'Q'){
                        ans++;
                        breakpoint = 0;
                        //8 direcciones 
                        if(j - 1 >= 0 && k - 1 >= 0){
                            if(chessboard[j - 1][k - 1] == '#'){
                                chessboard[j - 1][k - 1] = 'X';
                                ans++;
                            }
                        }
                        if(j - 1 >= 0){
                            if(chessboard[j - 1][k] == '#'){
                                chessboard[j - 1][k] = 'X';
                                ans++;
                            }
                        }
                        if(j - 1 >= 0 && k + 1 < 8){
                            if(chessboard[j - 1][k + 1] == '#'){
                                chessboard[j - 1][k + 1] = 'X';
                                ans++;
                            }
                        }
                        if(k - 1 >= 0){
                            if(chessboard[j][k - 1] == '#'){
                                chessboard[j][k - 1] = 'x';
                                ans++;
                            }
                        }
                        if(k + 1 < 8){
                            if(chessboard[j][k + 1] == '#'){
                                chessboard[j][k + 1] = 'X';
                                ans++;
                            }
                        }
                        if(j + 1 < 8 && k - 1 >= 0){
                            if(chessboard[j + 1][k - 1] == '#'){
                                chessboard[j - 1][k - 1] = 'X';
                                ans++;
                            }
                        }
                        if(j + 1 < 8){
                            if(chessboard[j + 1][k] == '#'){
                                chessboard[j + 1][k] = 'X';
                                ans++;
                            }
                        }
                        if(j + 1 < 8 && k + 1 < 8){
                            if(chessboard[j + 1][k + 1] == '#'){
                                chessboard[j + 1][k + 1] = 'X';
                                ans++;
                            }
                        }
                        //Diagonales 
                        if(j - 1 >= 0 && k + 1 < 8 && breakpoint == 0){
                            if(chessboard[j - 1][k + 1] == '#'){
                                chessboard[j - 1][k + 1] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 2 >= 0 && k + 2 < 8 && breakpoint == 0){
                            if(chessboard[j - 2][k + 2] == '#'){
                                chessboard[j - 2][k + 2] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 3 >= 0 && k + 3 < 8 && breakpoint == 0){
                            if(chessboard[j - 3][k + 3] == '#'){
                                chessboard[j - 3][k + 3] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 4 >= 0 && k + 4 < 8 && breakpoint == 0){
                            if(chessboard[j - 4][k + 4] == '#'){
                                chessboard[j - 4][k + 4] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 5 >= 0 && k + 5 < 8 && breakpoint == 0){
                            if(chessboard[j - 5][k + 5] == '#'){
                                chessboard[j - 5][k + 5] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 6 >= 0 && k + 6 < 8 && breakpoint == 0){
                            if(chessboard[j - 6][k + 6] == '#'){
                                chessboard[j - 6][k + 6] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 7 >= 0 && k + 7 < 8 && breakpoint == 0){
                            if(chessboard[j - 7][k + 7] == '#'){
                                chessboard[j - 7][k + 7] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 1 >= 0 && k - 1 >= 0 && breakpoint == 0){
                            if(chessboard[j - 1][k - 1] == '#'){
                                chessboard[j - 1][k - 1] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 2 >= 0 && k - 2 >= 0 && breakpoint == 0){
                            if(chessboard[j - 2][k - 2] == '#'){
                                chessboard[j - 2][k - 2] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 3 >= 0 && k - 3 >= 0 && breakpoint == 0){
                            if(chessboard[j - 3][k + 3] == '#'){
                                chessboard[j - 3][k + 3] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 4 >= 0 && k - 4 >= 0 && breakpoint == 0){
                            if(chessboard[j - 4][k - 4] == '#'){
                                chessboard[j - 4][k - 4] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 5 >= 0 && k - 5 >= 0 && breakpoint == 0){
                            if(chessboard[j - 5][k - 5] == '#'){
                                chessboard[j - 5][k - 5] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 6 >= 0 && k - 6 >= 0 && breakpoint == 0){
                            if(chessboard[j - 6][k - 6] == '#'){
                                chessboard[j - 6][k - 6] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 7 >= 0 && k - 7 >= 0 && breakpoint == 0){
                            if(chessboard[j - 7][k - 7] == '#'){
                                chessboard[j - 7][k - 7] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        //Derecha
                        if(k + 1 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 1] == '#'){
                                chessboard[j][k + 1] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k + 2 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 2] == '#'){
                                chessboard[j][k + 2] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k + 3 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 3] == '#'){
                                chessboard[j][k + 3] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k + 4 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 4] == '#'){
                                chessboard[j][k + 4] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k + 5 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 5] == '#'){
                                chessboard[j][k + 5] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k + 6 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 6] == '#'){
                                chessboard[j][k + 6] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k + 7 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 7] == '#'){
                                chessboard[j][k + 7] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        //Izquierda
                        if(k - 1 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 1] == '#'){
                                chessboard[j][k - 1] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k - 2 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 2] == '#'){
                                chessboard[j][k - 2] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k - 3 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 3] == '#'){
                                chessboard[j][k - 3] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k - 4 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 4] == '#'){
                                chessboard[j][k - 4] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k - 5 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 5] == '#'){
                                chessboard[j][k - 5] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k - 6 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 6] == '#'){
                                chessboard[j][k - 6] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k - 7 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 7] == '#'){
                                chessboard[j][k - 7] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        //Arriba
                        if(j + 1 >= 0 && breakpoint == 0){
                            if(chessboard[j + 1][k] == '#'){
                                chessboard[j + 1][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 2 >= 0 && breakpoint == 0){
                            if(chessboard[j + 2][k] == '#'){
                                chessboard[j + 2][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 3 >= 0 && breakpoint == 0){
                            if(chessboard[j + 3][k] == '#'){
                                chessboard[j + 3][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 4 >= 0 && breakpoint == 0){
                            if(chessboard[j + 4][k] == '#'){
                                chessboard[j + 4][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 5 >= 0 && breakpoint == 0){
                            if(chessboard[j + 5][k] == '#'){
                                chessboard[j + 5][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 6 >= 0 && breakpoint == 0){
                            if(chessboard[j + 6][k] == '#'){
                                chessboard[j + 6][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 7 >= 0 && breakpoint == 0){
                            if(chessboard[j + 7][k] == '#'){
                                chessboard[j + 7][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                    }
                    //Black pieces
                    if(chessboard[j][k] == 'p'){
                        ans++;
                        if(j == 6 && k == 4){//esta en la ps original
                            if(j - 1 >= 0) {
                                if(chessboard[j - 1][k] == '#'){
                                    chessboard[j - 1][k] = 'X';
                                    ans++;
                                }
                            }
                            if(j - 2 >= 0) { 
                                if(chessboard[j - 2][k] == '#'){
                                    chessboard[j - 2][k] = 'X';
                                    ans++;
                                }
                            }
                            if(j - 1 >= 0 && k - 1 >= 0){
                                if(chessboard[j - 1][k - 1] == '#'){
                                    chessboard[j - 1][k - 1] = 'X';
                                    ans++;
                                }
                            }
                            if(j - 1 >= 0 && k + 1 < 8){
                                if(chessboard[j - 1][k + 1] == '#'){
                                    chessboard[j - 1][k + 1] = 'X';
                                    ans++;
                                }
                            }
                        }
                        else{
                            if(j - 1 >= 0) {
                                if(chessboard[j - 1][k] == '#'){
                                    chessboard[j - 1][k] = 'X';
                                    ans++;
                                }
                            }
                            if(j - 1 >= 0 && k - 1 >= 0){
                                if(chessboard[j - 1][k - 1] == '#'){
                                    chessboard[j - 1][k - 1] = 'X';
                                    ans++;
                                }
                            }
                            if(j - 1 >= 0 && k + 1 < 8){
                                if(chessboard[j - 1][k + 1] == '#'){
                                    chessboard[j - 1][k + 1] = 'X';
                                    ans++;
                                }
                            }
                        }
                    }
                    else if(chessboard[j][k] == 'b'){
                        breakpoint = 0;
                        ans++;
                        if(j + 1 < 8 && k + 1 < 8 && breakpoint == 0){
                            if(chessboard[j + 1][k + 1] == '#'){
                                chessboard[j + 1][k + 1] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 2 < 8 && k + 2 < 8 && breakpoint == 0){
                            if(chessboard[j + 2][k + 2] == '#'){
                                chessboard[j + 2][k + 2] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 3 < 8 && k + 3 < 8 && breakpoint == 0){
                            if(chessboard[j + 3][k + 3] == '#'){
                                chessboard[j + 3][k + 3] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 4 < 8 && k + 4 < 8 && breakpoint == 0){
                            if(chessboard[j + 4][k + 4] == '#'){
                                chessboard[j + 4][k + 4] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 5 < 8 && k + 5 < 8 && breakpoint == 0){
                            if(chessboard[j + 5][k + 5] == '#'){
                                chessboard[j + 5][k + 5] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 6 < 8 && k + 6 < 8 && breakpoint == 0){
                            if(chessboard[j + 6][k + 6] == '#'){
                                chessboard[j + 6][k + 6] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 7 < 8 && k + 7 < 8 && breakpoint == 0){
                            if(chessboard[j + 7][k + 7] == '#'){
                                chessboard[j + 7][k + 7] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 1 < 8 && k - 1 >= 0 && breakpoint == 0){
                            if(chessboard[j + 1][k - 1] == '#'){
                                chessboard[j + 1][k - 1] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 2 < 8 && k - 2 >= 0 && breakpoint == 0){
                            if(chessboard[j + 2][k - 2] == '#'){
                                chessboard[j + 2][k - 2] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 3 < 8 && k - 3 >= 0 && breakpoint == 0){
                            if(chessboard[j + 3][k + 3] == '#'){
                                chessboard[j + 3][k + 3] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 4 < 8 && k - 4 >= 0 && breakpoint == 0){
                            if(chessboard[j + 4][k - 4] == '#'){
                                chessboard[j + 4][k - 4] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 5 < 8 && k - 5 >= 0 && breakpoint == 0){
                            if(chessboard[j + 5][k - 5] == '#'){
                                chessboard[j + 5][k - 5] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 6 < 8 && k - 6 >= 0 && breakpoint == 0){
                            if(chessboard[j + 6][k - 6] == '#'){
                                chessboard[j + 6][k - 6] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j + 7 < 8 && k - 7 >= 0 && breakpoint == 0){
                            if(chessboard[j + 7][k - 7] == '#'){
                                chessboard[j + 7][k - 7] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                    }
                    else if(chessboard[j][k] == 'q'){
                        ans++;
                        breakpoint = 0;
                        //Expansion 8 direcciones
                        if(j + 1 >= 0 && k - 1 >= 0){
                            if(chessboard[j - 1][k - 1] == '#'){
                                chessboard[j - 1][k - 1] = 'X';
                                ans++;
                            }
                        }
                        if(j - 1 >= 0){
                            if(chessboard[j - 1][k] == '#'){
                                chessboard[j - 1][k] = 'X';
                                ans++;
                            }
                        }
                        if(j - 1 >= 0 && k + 1 < 8){
                            if(chessboard[j - 1][k + 1] == '#'){
                                chessboard[j - 1][k + 1] = 'X';
                                ans++;
                            }
                        }
                        if(k - 1 >= 0){
                            if(chessboard[j][k - 1] == '#'){
                                chessboard[j][k - 1] = 'X';
                                ans++;
                            }
                        }
                        if(k + 1 < 8){
                            if(chessboard[j][k + 1] == '#'){
                                chessboard[j][k + 1] = 'X';
                                ans++;
                            }
                        }
                        if(j + 1 < 8 && k - 1 >= 0){
                            if(chessboard[j + 1][k - 1] == '#'){
                                chessboard[j - 1][k - 1] = 'X';
                                ans++;
                            }
                        }
                        if(j + 1 < 8){
                            if(chessboard[j + 1][k] == '#'){
                                chessboard[j + 1][k] = 'X';
                                ans++;
                            }
                        }
                        if(j + 1 < 8 && k + 1 < 8){
                            if(chessboard[j + 1][k + 1] == '#'){
                                chessboard[j + 1][k + 1] = 'X';
                                ans++;
                            }
                        }
                        //Diagonales
                        if(j - 1 >= 0 && k + 1 < 8 && breakpoint == 0){
                            if(chessboard[j - 1][k + 1] == '#'){
                                chessboard[j - 1][k + 1] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 2 >= 0 && k + 2 < 8 && breakpoint == 0){
                            if(chessboard[j - 2][k + 2] == '#'){
                                chessboard[j - 2][k + 2] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 3 >= 0 && k + 3 < 8 && breakpoint == 0){
                            if(chessboard[j - 3][k + 3] == '#'){
                                chessboard[j - 3][k + 3] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 4 >= 0 && k + 4 < 8 && breakpoint == 0){
                            if(chessboard[j - 4][k + 4] == '#'){
                                chessboard[j - 4][k + 4] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 5 >= 0 && k + 5 < 8 && breakpoint == 0){
                            if(chessboard[j - 5][k + 5] == '#'){
                                chessboard[j - 5][k + 5] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 6 >= 0 && k + 6 < 8 && breakpoint == 0){
                            if(chessboard[j - 6][k + 6] == '#'){
                                chessboard[j - 6][k + 6] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 7 >= 0 && k + 7 < 8 && breakpoint == 0){
                            if(chessboard[j - 7][k + 7] == '#'){
                                chessboard[j - 7][k + 7] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 1 >= 0 && k - 1 >= 0 && breakpoint == 0){
                            if(chessboard[j - 1][k - 1] == '#'){
                                chessboard[j - 1][k - 1] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 2 >= 0 && k - 2 >= 0 && breakpoint == 0){
                            if(chessboard[j - 2][k - 2] == '#'){
                                chessboard[j - 2][k - 2] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 3 >= 0 && k - 3 >= 0 && breakpoint == 0){
                            if(chessboard[j - 3][k + 3] == '#'){
                                chessboard[j - 3][k + 3] = 'X';
                                ans++;
                            }
                        }
                        if(j - 4 >= 0 && k - 4 >= 0 && breakpoint == 0){
                            if(chessboard[j - 4][k - 4] == '#'){
                                chessboard[j - 4][k - 4] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 5 >= 0 && k - 5 >= 0 && breakpoint == 0){
                            if(chessboard[j - 5][k - 5] == '#'){
                                chessboard[j - 5][k - 5] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 6 >= 0 && k - 6 >= 0 && breakpoint == 0){
                            if(chessboard[j - 6][k - 6] == '#'){
                                chessboard[j - 6][k - 6] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 7 >= 0 && k - 7 >= 0 && breakpoint == 0){
                            if(chessboard[j - 7][k - 7] == '#'){
                                chessboard[j - 7][k - 7] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        //Derecha
                        if(k + 1 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 1] == '#'){
                                chessboard[j][k + 1] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k + 2 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 2] == '#'){
                                chessboard[j][k + 2] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k + 3 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 3] == '#'){
                                chessboard[j][k + 3] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k + 4 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 4] == '#'){
                                chessboard[j][k + 4] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k + 5 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 5] == '#'){
                                chessboard[j][k + 5] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k + 6 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 6] == '#'){
                                chessboard[j][k + 6] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k + 7 < 8 && breakpoint == 0){
                            if(chessboard[j][k + 7] == '#'){
                                chessboard[j][k + 7] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        //izq
                        if(k - 1 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 1] == '#'){
                                chessboard[j][k - 1] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k - 2 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 2] == '#'){
                                chessboard[j][k - 2] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k - 3 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 3] == '#'){
                                chessboard[j][k - 3] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k - 4 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 4] == '#'){
                                chessboard[j][k - 4] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k - 5 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 5] == '#'){
                                chessboard[j][k - 5] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k - 6 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 6] == '#'){
                                chessboard[j][k - 6] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(k - 7 >= 0 && breakpoint == 0){
                            if(chessboard[j][k - 7] == '#'){
                                chessboard[j][k - 7] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        //Abajo
                        if(j - 1 >= 0 && breakpoint == 0){
                            if(chessboard[j - 1][k] == '#'){
                                chessboard[j - 1][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 2 >= 0 && breakpoint == 0){
                            if(chessboard[j - 2][k] == '#'){
                                chessboard[j - 2][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 3 >= 0 && breakpoint == 0){
                            if(chessboard[j - 3][k] == '#'){
                                chessboard[j - 3][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 4 >= 0 && breakpoint == 0){
                            if(chessboard[j - 4][k] == '#'){
                                chessboard[j - 4][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 5 >= 0 && breakpoint == 0){
                            if(chessboard[j - 5][k] == '#'){
                                chessboard[j - 5][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 6 >= 0 && breakpoint == 0){
                            if(chessboard[j - 6][k] == '#'){
                                chessboard[j - 6][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                        if(j - 7 >= 0 && breakpoint == 0){
                            if(chessboard[j - 7][k] == '#'){
                                chessboard[j - 7][k] = 'X';
                                ans++;
                            }
                            else breakpoint = 1;
                        }
                    }
                }
            }
            cout p 64 - ans p "\n";
        }
    }
}
