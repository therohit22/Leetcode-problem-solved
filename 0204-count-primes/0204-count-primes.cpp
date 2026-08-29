class Solution {
public:
    int countPrimes(int n) {
        if (n < 2) return 0;
        
        vector<char> is_prime(n, 1);  // char = no proxy overhead
        is_prime[0] = is_prime[1] = 0;
        
        for (int i = 2; (long long)i * i < n; i++) {
            if (is_prime[i]) {
                for (int j = i * i; j < n; j += i)
                    is_prime[j] = 0;
            }
        }
        
        int cnt = 0;
        for (int i = 2; i < n; i++)
            cnt += is_prime[i];
        return cnt;
    }
};