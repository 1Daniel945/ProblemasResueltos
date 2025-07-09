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

const int Verde = 0;
const int Naranja = 1;
const int Rojo = 2; 

struct semaforo{
    int len;
    int estado;
    int timeCont;
};

void solve(vector<semaforo>arr){
    //hacer la simulacion de 18,000 = 60s * 60h * 5 horas
    bool startGreen = 1;
    bool findSolution = 0;
    for(int seg = 0; seg <= 18000; ++seg){
        bool f = 1;
        fr(i, 0, arr.size()){
            arr[i].timeCont++;
            if(arr[i].estado == Naranja && arr[i].timeCont > 5){
                arr[i].estado = Rojo;
                arr[i].timeCont = 1;
            }
            else if(arr[i].estado == Verde && arr[i].timeCont > arr[i].len - 5){
                arr[i].estado = Naranja;
                arr[i].timeCont = 1;
            }
            else if(arr[i].estado == Rojo && arr[i].timeCont > arr[i].len){
                arr[i].estado = Verde;
                arr[i].timeCont = 1;
            }
            if(arr[i].estado != 0){
                f = 0;
                startGreen = 0;
            }
        }
        if(f && !startGreen){
            int tiempo = seg;
            cout p setfill('0') p setw(2) p seg/3600 p ":";
            tiempo %= 3600;
            cout p setfill('0') p setw(2) p tiempo/60 p ":";
            tiempo %= 60;
            cout p setfill('0') p setw(2) p tiempo p "\n";
            findSolution = 1;
            break;
        }
    }
    if(!findSolution){
        cout p "Signals fail to synchronise in 5 hours\n";
    }   
}

int main(){
    string input;
    vector<int>nums;
    while(getline(cin, input)){
        istringstream stream(input);
        int x;
        while(stream >> x){
            nums.push_back(x);
        }
    }
    //Para cada caso guardar n semaforos
    vector<semaforo>arr;
    fr(i, 0, nums.size() - 3){
        if(nums[i] == 0){
            solve(arr);
            arr.clear();
        }
        else {
            arr.push_back({nums[i], 0, 0});
        }
    }
    return 0;
}

