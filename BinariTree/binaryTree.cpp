#include <bits/stdc++.h>
#define fr(i,x,n)for(int i=x; i<(int)n; ++i)
#define fi(i,x,n)for(int i=n-1; i>=x; --i)
#define in >>
#define p <<
#define fp(a,b,t,x) for(pair<a,b>t:x)
#define mps(a,b,x) map<a,b>x;
#define vp(x) vector<pair<char,int>>x;
#define v(x,d) vector<d>x;
#define fastio()ios::sync_with_stdio(0);cin.tie(0);
#define mst(a,b)memset(a,b,sizeof(a));
#define f first
#define s second
typedef long long ll;
using namespace std;

//move for make a dfs
int di[] = {-1, 0, 1, 0};
int dj[] = {0, 1, 0, -1};

class tree{
    node* root;
    public:
        tree();
        bool isEmpty();
        void insert(int date);
        node* findN(int date);
         
};

class node{
    int date;
    node* lef;
    node* rig;

    friend class tree;

    public:
        node(int _date);
};

node::node(int _date){
    date = _date;
    lef = NULL;
    rig = NULL;
}



int main(){
    return 0;
}