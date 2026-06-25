class Solution {
public:
    int maxDepth(string s) {
        int maxdept=0;
        int dept=0;

        for(char ch : s){
            if(ch=='('){
                dept++;
                maxdept=max(dept, maxdept);
            }
            else if(ch == ')'){
            dept --;
            }
        }
         return maxdept;
    }  
};