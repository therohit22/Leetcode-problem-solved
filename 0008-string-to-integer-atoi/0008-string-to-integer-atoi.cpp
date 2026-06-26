class Solution {
public:
    int myAtoi(string s) {

        int i = 0;
        int n = s.size();

        // Step 1: Skip leading spaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Step 2: Check sign
        int sign = 1;

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        // Step 3: Build the number
        long long num = 0;

        while (i < n && isdigit(s[i])) {

            int digit = s[i] - '0';

            num = num * 10 + digit;

            // Step 4: Handle overflow
            if (sign * num >= INT_MAX)
                return INT_MAX;

            if (sign * num <= INT_MIN)
                return INT_MIN;

            i++;
        }

        // Step 5: Return answer
        return sign * num;
    }
};