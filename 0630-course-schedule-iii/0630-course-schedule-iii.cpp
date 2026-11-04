
class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {

        // Step 1: Sort courses by deadline
        sort(courses.begin(), courses.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[1] < b[1];
             });

        // Step 2: Max heap to store durations
        priority_queue<int> pq;

        int totalTime = 0;

        // Step 3: Traverse all courses
        for(auto& course : courses) {

            int duration = course[0];
            int deadline = course[1];

            // Take the current course
            totalTime += duration;
            pq.push(duration);

            // Step 4: If deadline exceeded,
            // remove the longest course
            if(totalTime > deadline) {

                totalTime -= pq.top();
                pq.pop();
            }
        }

        // Step 5: Number of selected courses
        return pq.size();
    }
};
