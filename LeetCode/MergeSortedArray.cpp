#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n) for(int i = x; i<(int)n; ++i)
#define fi(i, x, n) for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define ff first
#define ss second
#define pb push_back
#define ac accumulate
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == (int) n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;
int MOD = 1e9 + 7;

int removeDuplicates(vector<int>& nums) {
    map<int, int>mp;
    vector<int>a;
    fr(i, 0, nums.size()){
        if(mp[nums[i]] < 2){
            a.push_back(nums[i]);
            mp[nums[i]]++;
        }
    }
    return a.size();        
}

void solve(){
    vector<int>a = {1, 1, 1, 2, 2, 3};
}

int main(){
    fast_io
    solve();
    return 0;
}
