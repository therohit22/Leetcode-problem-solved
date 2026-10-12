class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        vector<int> st;

        for (int x : asteroids) {

            while (!st.empty() && st.back() > 0 && x < 0) {

                if (st.back() < abs(x)) {
                    st.pop_back();
                }
                else if (st.back() == abs(x)) {
                    st.pop_back();
                    x = 0;
                }
                else {
                    x = 0;
                }
            }

            if (x != 0) {
                st.push_back(x);
            }
        }

        return st;
    }
};