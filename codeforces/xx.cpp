#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i< (int) n; ++i)
#define fi(i, x, n)for(int i= (int) x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;

int main(){
    fastio
    char zero[5][3];
    char one[5][1];
    char two[5][3];
    char three[5][3];
    char four[5][3];
    char five[5][3];
    char six[5][3];
    char seven[5][3];
    char eight[5][3];
    char nine[5][3];
    memset(zero, ' ', sizeof(zero));
    memset(one, ' ', sizeof(one));
    memset(two, ' ', sizeof(two));
    memset(three, ' ', sizeof(three));
    memset(four, ' ', sizeof(four));
    memset(five, ' ', sizeof(five));
    memset(six, ' ', sizeof(six));
    memset(seven, ' ', sizeof(seven));
    memset(eight, ' ', sizeof(eight));
    memset(nine, ' ', sizeof(nine));
    string s;
    char x;
    cin in s in x;
    zero[0][0] = x, zero[0][1] = x, zero[0][2] = x;
    zero[1][0] = x, zero[1][2] = x, zero[2][0] = x;
    zero[2][2] = x, zero[3][0] = x, zero[3][2] = x;
    zero[4][0] = x, zero[4][1] = x, zero[4][2] = x;
    one[0][0] = x, one[0][1] = x, one[0][2] = x;
    one[0][3] = x, one[0][4] = x;
    two[0][0] = x, two[0][1] = x, two[0][2] = x;
    two[1][2] = x;
    two[2][0] = x, two[2][1] = x, two[2][2] = x;
    two[3][0] = x;
    two[4][0] = x, two[4][1] = x, two[4][2] = x;
    three[0][0] = x, three[0][1] = x, three[0][2] = x;
    three[1][2] = x;
    three[2][0] = x, three[2][1] = x, three[2][2] = x;
    three[3][2] = x;
    three[4][0] = x, three[4][1] = x, three[4][2] = x;
    four[0][0] = x, four[0][2] = x;
    four[1][0] = x, four[1][2] = x;
    four[2][0] = x, four[2][1] = x, four[2][2] = x;
    four[3][2] = x, four[4][2] = x;
    five[0][0] = x, five[0][1] = x, five[0][2] = x;
    five[1][0] = x;
    five[2][0] = x, five[2][1] = x, five[2][2] = x;
    five[3][2] = x;
    five[4][0] = x, five[4][1] = x, five[4][2] = x;
    six[0][0] = x, six[0][1] = x, six[0][2] = x;
    six[1][0] = x;
    six[2][0] = x, six[2][1] = x, six[2][2] = x;
    six[3][0] = x, six[3][2] = x;
    six[4][0] = x, six[4][1] = x, six[4][2] = x;
    seven[0][0] = x, seven[0][1] = x, seven[0][2] = x;
    seven[1][2] = x, seven[2][2] = x, seven[3][2] = x, seven[4][2] = x;
    eight[0][0] = x, eight[0][1] = x, eight[0][2] = x;
    eight[1][0] = x, eight[1][2] = x, eight[2][0] = x;
    eight[2][2] = x, eight[2][1] = x, eight[3][0] = x, eight[3][2] = x;
    eight[4][0] = x, eight[4][1] = x, eight[4][2] = x;
    nine[0][0] = x, nine[0][1] = x, nine[0][2] = x;
    nine[1][0] = x, nine[1][2] = x, nine[2][0] = x;
    nine[2][2] = x, nine[2][1] = x, nine[3][2] = x;
    nine[4][0] = x, nine[4][1] = x, nine[4][2] = x;
    fr(i, 0, s.size()){
        if(s.at(i) == '0'){
            fr(i, 0, 5){
                fr(j, 0, 3){
                    cout p zero[i][j];
                    if(j == 4)cout p " ";
                }
                cout p "\n";
            }
        }   
        if(s.at(i) == '1'){
            fr(i, 0, 5){
                fr(j, 0, 1){
                    cout p one[i][j] p " \n";
                }
            }
        }
        if(s.at(i) == '2'){
            fr(i, 0, 5){
                fr(j, 0, 3){
                    cout p two[i][j];
                    if(j == 4)cout p " ";
                }
                cout p "\n";
            }
        }
        if(s.at(i) == '3'){
            fr(i, 0, 5){
                fr(j, 0, 3){
                    cout p three[i][j];
                    if(j == 4)cout p " ";
                }
                cout p "\n";
            }
        }   
        if(s.at(i) == '4'){
            fr(i, 0, 5){
                fr(j, 0, 3){
                    cout p four[i][j];
                    if(j == 4)cout p " ";
                }
                cout p "\n";
            }
        }
        if(s.at(i) == '5'){
            fr(i, 0, 5){
                fr(j, 0, 3){
                    cout p five[i][j];
                    if(j == 4)cout p " ";
                }
                cout p "\n";
            }
        }
        if(s.at(i) == '6'){
            fr(i, 0, 5){
                fr(j, 0, 3){
                    cout p six[i][j];
                    if(j == 4)cout p " ";
                }
                cout p "\n";
            }
        }
        if(s.at(i) == '7'){
            fr(i, 0, 5){
                fr(j, 0, 3){
                    cout p seven[i][j];
                    if(j == 4)cout p " ";
                }
                cout p "\n";
            }
        }
        if(s.at(i) == '8'){
            fr(i, 0, 5){
                fr(j, 0, 3){
                    cout p eight[i][j];
                    if(j == 4)cout p " ";
                }
                cout p "\n";
            }
        }
        if(s.at(i) == '9'){
            fr(i, 0, 5){
                fr(j, 0, 3){
                    cout p nine[i][j];
                    if(j == 4)cout p " ";
                }
                cout p "\n";
            }
        }
    }
    return 0;
}
