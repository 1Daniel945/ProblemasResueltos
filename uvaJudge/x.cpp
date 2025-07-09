#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;
/*
void solve(){
    ofstream ar;
    ar.open("a.txt");
    int n;
    while(cin in n, n != 0){
        ar p "Printing order for " p n p " pages:\n";
        if(n > 1){
            //Esto ya funciona con los pares
            if((n / 2) % 2 != 0 && n % 2 == 0){
                int x = n, y = 1, c = 1; 
                fr(i, 0, (n / 2) + 1){
                    if(i == 0 || i == 1){
                        if(i % 2 == 0){
                            ar p "Sheet " p c p ", front: Blank, " p y p "\n"; 
                        }
                        if(i % 2 == 1){
                            y++;
                            ar p "Sheet " p c p ", back : " p y p ", Blank\n";
                            c++;
                            y++;
                        }
                    }
                    else{
                        if(i % 2 == 0){
                            ar p "Sheet " p c p ", front: " p x p ", " p y p "\n";
                            y++;
                            x--;
                        }
                        else{
                            ar p "Sheet " p c p ", back : " p y p ", " p x p "\n";
                            y++;
                            c++;
                            x--;
                        }
                    }
                }
            }
            else{
                int x = n, y = 1, c = 1;
                if(n % 2 == 0){
                    fr(i, 0, n / 2){
                        if(i % 2 == 0){
                            ar p "Sheet " p c p ", front: " p x p ", " p y p "\n";
                            y++;
                            x--;
                        }
                        else{
                            ar p "Sheet " p c p ", back : " p y p ", " p x p "\n";
                            c++;
                            y++;
                            x--;
                        }
                    }
                }
                else{
                    int sz = n - 1;
                    int x = n, y = 1;
                    if(n > sz * 2){
                        fr(i, 0, n / 2){
                            if(i % 2 == 0){
                                ar p "Sheet " p c p ", front: " p x p ", " p y p "\n";
                                y++;
                                x--;
                            }
                            else{
                                ar p "Sheet " p c p ", back : " p y p ", " p x p "\n";
                                c++;
                                y++;
                                x--;
                            }
                        }
                    }   
                    else{
                        int star = (sz * 2) - n, c = 1, ct = 0;
                        fr(i, 0, (sz * 2) / 2){
                            if(i % 2 == 0){
                                if(ct < star){
                                    ar p "Sheet " p c p ", front: " p "Blank, " p y p "\n";
                                    ct++;
                                    y++;
                                }
                                else{
                                    ar p "Sheet " p c p ", front: " p y p ", " p x p "\n";
                                    y++;
                                    x--;
                                }
                            }
                            else{
                                if(ct < star){
                                    ar p "Sheet " p c p ", back : " p y p ", " p  "Blank\n";
                                    ct++;
                                    y++;
                                    c++;
                                }
                                else{
                                    ar p "Sheet " p c p ", back : " p y p ", " p x p "\n";
                                    y++;
                                    c++;
                                    x--;
                                }
                            }
                        }
                    }                
                }
            }
        }
        else ar p "Sheet 1, front: Blank, 1\n";
    }
}*/
