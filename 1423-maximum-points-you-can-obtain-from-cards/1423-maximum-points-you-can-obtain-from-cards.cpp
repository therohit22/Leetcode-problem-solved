class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n = cardPoints.size();

        // Take first k cards from left
        int sum = 0;

        for (int i = 0; i < k; i++) {
            sum += cardPoints[i];
        }

        int ans = sum;

        // Start replacing left cards with right cards
        int right = n - 1;

        for (int i = k - 1; i >= 0; i--) {
            
            sum -= cardPoints[i];
            sum += cardPoints[right];

            ans = max(ans, sum);

            right--;
        }

        return ans;
    }
};