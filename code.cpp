#include "code.h"

// where you write solution
class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        map<pair<int, int>, long> mp;

        for (int i = 0; i < nums.size(); i++){
            string num = to_string(nums[i]);

            for (int j = 0; j < num.size(); j++){
                pair<int, int> pos_occur = make_pair(j, num[j] - 48);
                mp[pos_occur]++;
            }
        }


        long long ans = 0;
        int n = nums.size();

        for (auto pr : mp){
            int c = pr.second;
            ans += c * (n - c);
        }

        return ans != 0 ? ans / 2 : ans;
    }
};

template <typename T1, typename T2, typename T3, typename T4> 
T1 Code<T1, T2, T3, T4>::solve(T2 para, T3 para2, T4 para3){
    // remember to change function name
    Solution sol;
    return sol.sumDigitDifferences(para);
}



