#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i< (int) n; ++i)
#define fi(i, x, n)for(int i= (int) x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define ff first 
#define ss second
typedef long long ll;
using namespace std;

void getPrefixSum(){
    
}

int hexDec(string s){
    int x = 0;
    int ps = s.size() - 1;
    fr(i, 0, s.size()){
        if(s.at(i) == 'A') x += pow(16, ps) * 10;
        else if(s.at(i) == 'B') x += pow(16, ps) * 11;
        else if(s.at(i) == 'C') x += pow(16, ps) * 12;
        else if(s.at(i) == 'D') x += pow(16, ps) * 13;
        else if(s.at(i) == 'E') x += pow(16, ps) * 14;
        else if(s.at(i) == 'F') x += pow(16, ps) * 15;
        else if(s.at(i) != 'x' && s.at(i) != '0') x += pow(16, ps) * (s.at(i) - '0');
        ps--;
    }
    return x;
}

int octDec(string s){
    int x = 0;
    int ps = 0;
    fi(i, s.size(), 0){
        x += pow(8, ps) * (s.at(i) - '0');
        ps++;
    }
    return x;
}

void solve(){
    string s;
    int n, totalMarks = 0;
    ofstream ar;
    ar.open("a.txt");
    while(cin in s in n){
        if(s == "0" && n == 0) break;
        if(s.find('x') != string :: npos){
            int current = hexDec(s), v;
            totalMarks = 0;
            vector<int>ans, a;
            string s1;
            fr(i, 0, n){
                cin in s1 in v;
                a.push_back(v);
                if(s1 == "++i" || s1 == "i++"){
                    current++;
                    if(i == 0){
                        if(current != v) current = v;
                        else ans.push_back(current);
                    }
                    else ans.push_back(v);
                }
                else if(s1 == "--i" || s1 == "i--"){
                    current--;
                    if(i == 0){
                        if(current != v) current = v;
                        else ans.push_back(current);
                    }
                    else ans.push_back(v);
                }
                else if(s1 == "i"){
                    if(i == 0){
                        if(current != v) current = v;
                        else ans.push_back(current);
                    }
                    else ans.push_back(v);
                }
            } 
            fr(i, 0, ans.size()){
                if(find(a.begin(), a.end(), ans[i]) != a.end()){
                    int ps = distance(a.begin(), find(a.begin(), a.end(), ans[i]));
                    a[ps] = INT_MIN;
                    totalMarks++;
                }
            }
            ar p totalMarks p "\n";
        }
        else if(s.at(0) == '0'){
            int current = octDec(s), v;
            totalMarks = 0;
            vector<int>ans, a;
            string s1;
            fr(i, 0, n){
                cin in s1 in v;
                a.push_back(v);
                if(s1 == "++i" || s1 == "i++"){
                    current++;
                    if(i == 0){
                        if(current != v) current = v;
                        else ans.push_back(current);
                    }
                    else ans.push_back(v);
                }
                else if(s1 == "--i" || s1 == "i--"){
                    current--;
                    if(i == 0){
                        if(current != v) current = v;
                        else ans.push_back(current);
                    }
                    else ans.push_back(v);
                }
                else if(s1 == "i"){
                    if(i == 0){
                        if(current != v) current = v;
                        else ans.push_back(current);
                    }
                    else ans.push_back(v);
                }
            } 
            fr(i, 0, ans.size()){
                if(find(a.begin(), a.end(), ans[i]) != a.end()){
                    int ps = distance(a.begin(), find(a.begin(), a.end(), ans[i]));
                    a[ps] = INT_MIN;
                    totalMarks++;
                }
            }
            ar p totalMarks p "\n";
        }
        else{
            int current = stoi(s), v;
            totalMarks = 0;
            vector<int>ans, a;
            string s1;
            fr(i, 0, n){
                cin in s1 in v;
                a.push_back(v);
            } 
            fr(i, 0, ans.size()){
                if(find(a.begin(), a.end(), ans[i]) != a.end()){
                    int ps = distance(a.begin(), find(a.begin(), a.end(), ans[i]));
                    a[ps] = INT_MIN;
                    totalMarks++;
                }
            }
            ar p totalMarks p "\n";
        }
    }
    ar.close();
}

int main(){
    fastio
    solve();
    return 0;
}