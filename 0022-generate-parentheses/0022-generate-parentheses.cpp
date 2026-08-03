class Solution {
public:
    void solve(int open, int close, string &curr,
               vector<string> &ans, int n) {

        // Base Case
        if (curr.length() == 2 * n) {
            ans.push_back(curr);
            return;
        }

        // Take '('
        if (open < n) {
            curr.push_back('(');
            solve(open + 1, close, curr, ans, n);
            curr.pop_back();   // Backtrack
        }

        // Take ')'
        if (close < open) {
            curr.push_back(')');
            solve(open, close + 1, curr, ans, n);
            curr.pop_back();   // Backtrack
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr = "";

        solve(0, 0, curr, ans, n);

        return ans;
    }
};