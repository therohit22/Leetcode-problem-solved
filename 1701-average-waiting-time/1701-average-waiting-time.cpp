class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long currentTime = 0;
        long long totalWaitingTime = 0;

        for(int i = 0; i < customers.size(); i++) {

            int arrivalTime = customers[i][0];
            int preparationTime = customers[i][1];

            int startTime = max(currentTime, (long long)arrivalTime);

            currentTime = startTime + preparationTime;

            int waitingTime = currentTime - arrivalTime;

            totalWaitingTime += waitingTime;
        }

        return (double)totalWaitingTime / customers.size();
    }
};