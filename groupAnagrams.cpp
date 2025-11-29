#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        // 普通 for 循环：按下标遍历
        for (int i = 0; i < (int)strs.size(); i++) {
            string s = strs[i];
            string key = s;
            sort(key.begin(), key.end());
            mp[key].push_back(s);
        }

        vector<vector<string>> res;

        // 普通 iterator 写法（不用 auto）
        unordered_map<string, vector<string>>::iterator it;
        for (it = mp.begin(); it != mp.end(); it++) {
            res.push_back(it->second);
        }

        return res;
    }
};

int main() {
    vector<string> strs = {"eat","tea","ate","tan","nat","bat"};
    Solution sol;
    auto ans = sol.groupAnagrams(strs);

    for (auto &group : ans) {
        for (auto &s : group) {
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}
