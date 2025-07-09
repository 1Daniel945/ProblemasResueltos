#include <iostream>
//#include <vector>
using namespace std;
/*
vector<int> multiply(vector<int>& a, int b) {
    int carry = 0;
    for (int i = 0; i < a.size() || carry; ++i) {
        if (i == a.size())
            a.push_back(0);
        long long temp = a[i] * 1LL * b + carry;
        carry = temp / 10;
        a[i] = temp % 10;
    }
    while (a.size() > 1 && a.back() == 0)
        a.pop_back();
    return a;
}
*/
int main() {
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int f=0;
        for(int i=1; i<n; i++){
            if(i==1){
                f=(i*(i+1));
            }
            else{
                f =+ (f*(i+1));
            }
        }
        /*vector<int> result{1};

        for (int i = 2; i <= n; ++i) {
            result = multiply(result, i);
        }
        for (int i = result.size() - 1; i >= 0; --i) {
            cout << result[i];
        }*/
        cout<<f<<"\n";
    }

    return 0;
}
