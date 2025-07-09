#include <bits/stdc++.h> 
#define fr(i, x, n)for(int i = x; i<(int)n; ++i) 
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i) 
#define in >> 
#define p << 
#define fp(a, b, t, x) for(pair<a, b>t : x) 
#define vp(x) vector<pair<int, int>>x; 
#define v(x, d) vector<d>x; 
#define fast_io ios::sync_with_stdio(0);cin.tie(0); 
#define cAll(a, b) count(a.begin(), a.end(), b) 
#define ff first 
#define ss second 
#define lsb(x) ((x) & -(x))
typedef long long ll; 
using namespace std; 

//Complejidad temporal O(log n)
template<typename T>//Se usa con estructuras para definir un tipo de dato automatico
struct BIT{
    int n;
    vector<T>ft;
    //De esta forma se debe colocar en el orden en que se declararon
    BIT(int m) : n(m), ft(m + 1) {}
    //Similar a la funcion build
    BIT(vector<T> &a) : BIT((int) a.size()){
        fr(i, 0, n) update(i + 1, a[i]);
    }
    void update(int i, T x){
        for(; i <= n; i += lsb(i)) ft[i] += x;
    }
    //Una sola query
    T query(int i){
        T sm = 0;
        for(; i > 0; i -= lsb(i)){
            //0 - i
            sm += ft[i];
        }
        return sm;
    }
    //Rango de queries
    T query(int i, int j){
        return query(j) - query(i - 1);
    }
};

void solve(){ 
    //K la potencia mas grande de 2 que divide a[i]
    int n, q; cin in n in q;
    vector<long long>a(n); 
    fr(i, 0, n) cin in a[i];
    BIT ft(a);
    int c, b, x;
    fr(i, 0, q){
        cin in c in b in x;
        if(c == 1) ft.update(b, x);
        else cout p ft.query(b, x) p "\n";
    }
} 
        
int main(){ 
    fast_io 
    solve(); 
    return 0; 
}