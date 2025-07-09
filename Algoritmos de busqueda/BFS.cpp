#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=(int)x-1; i>=n; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define vp(x) vector<pair<int,int>>x;
#define v(x,d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;

//DHASIA WEZKA QUEEN

//formula para calculas sumas ((n *(n + 1))/2) p "\n";
/*
Determine an efficient way to position an elemen
if(find(v.begin(),v.end(), x)!=v.end()){
        int index = distance (v.begin(), find(v.begin(),v.end(), x));
        cout p index p "\n";
    }
*/

/*
This algorithm serves to counst the number of appearances in a string.
int x = 0, ps = 0;
    while((ps = s.find(s1, ps))!=string::npos){
        x++;
        ps += s1.size();
    }
    cout p x p "\n";
*/

/*
    Metro problem omegaup
    int main() {
    int n, m;
    cin in n in m;
    map<pair<int, int>, int>mp;
    int a, b, c;
    fr(i, 0, m){
        cin in a in b in c;
        mp[{a, b}] = c;
    }
    for(pair<pair<int, int>,int>pp : mp){
        pair<int, int>p1;
        p1 = pp.first;
        cout p p1.first p " " p p1.second p " " p pp.second p "\n";
    }
    return 0;
}
*/
/*
Fecha 1 restar lo que le falta para la cantidad de dias de ese mes
+ Meses que estan entre las fechas
+ la cantidad de dias del mes transcurrido
*/
/*map<string, int>mp
    {
        {"ENE", 31}, {"FEB", 28}, {"MAR", 31}, 
        {"ABR", 30}, {"MAY", 31}, {"JUN", 30}, 
        {"JUL", 31}, {"AGO", 31}, {"SEP", 30},
        {"OCT", 31}, {"NOV", 30}, {"DIC", 31}
    };
int x, y;
string s,s1;
cin in s in x in s1 in y;
int x1 = mp[s] - x;
cout p x1 p "\n";
*/

/*
    Prefijo: Desde el inicio [0, i]
    Sufijos: Empieza desde el final [i, n]
    (i, n) Cuando es parentesis significa que es excluyente del rango
    Sirve para calcular la suma en rangos de manera eficiente
*/
int main(){
    fastio
    string s, s1 = "";
    getline(cin, s);
    fr(i, 0, s.size()){
        if((s.at(i) >= 65 && s.at(i) <= 90) ||((s.at(i) >= 97 && s.at(i) <= 122))){
            s1 += s.at(i);
        }   
        else if(s.at(i) == 32){
            s1 += s.at(i);
        }
    }
    stringstream ss(s1);
    string nw;
    int mxs = 0;
    while(ss>>nw){
        mxs = max(mxs, (int) nw.size());
    }
    cout p mxs p "\n";
    return 0;
}