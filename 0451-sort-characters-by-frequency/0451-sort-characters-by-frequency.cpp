class Solution {
public:
    string frequencySort(string s) {

        string ans = "";

        unordered_map<char, int> freq;

        for(char ch : s){
            freq[ch]++;
        }

        vector<pair<char, int>> v;

        for(auto it : freq){
            v.push_back({it.first, it.second});
        }

        sort(v.begin(), v.end(),
            [](pair<char, int> a, pair<char, int> b){
                return a.second > b.second;
            }
        );

        for(auto it : v){
            ans += string(it.second, it.first);
        }

        return ans;
    }
};