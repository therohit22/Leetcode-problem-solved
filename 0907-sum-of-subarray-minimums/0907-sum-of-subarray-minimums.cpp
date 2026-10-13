class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {

        int n = arr.size();
        long long ans = 0;
        const int MOD = 1e9 + 7;

        vector<int> left(n), right(n);

        stack<int> st;

        // Previous Smaller
        for (int i = 0; i < n; i++) {

            while (!st.empty() && arr[st.top()] > arr[i])
                st.pop();

            left[i] = st.empty() ? -1 : st.top();

            st.push(i);
        }

        while (!st.empty())
            st.pop();

        // Next Smaller or Equal
        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && arr[st.top()] >= arr[i])
                st.pop();

            right[i] = st.empty() ? n : st.top();

            st.push(i);
        }

        // Calculate answer
        for (int i = 0; i < n; i++) {

            long long L = i - left[i];
            long long R = right[i] - i;

            ans = (ans + arr[i] * L % MOD * R) % MOD;
        }

        return ans;
    }
};