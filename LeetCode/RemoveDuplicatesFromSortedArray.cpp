#include <bits/stdc++.h>
using namespace std;

#define fr(i, x, n) for(int i = x; i < (int) n; ++i)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>v;
        int x = -200;
        fr(i, 0, nums.size()){
            if(x == -200){
                x = nums[i];
                v.push_back(x);
            }
            else if(x > -200 && nums[i] != x){
                x = nums[i];
                v.push_back(x);
            }
        }
        nums = v;
        return (int) nums.size();
    }
};