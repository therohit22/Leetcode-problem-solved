class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        string word="";
        // extract words from string
        for(char ch: s){
            if(ch !=' '){
                word+=ch;
            }else{
                if(word!= ""){
                    words.push_back(word);
                    word="";

                }
            }
        }
        // push last word
        if(word !=""){
            words.push_back(word);
        }
        // reversed the word

        reverse(words.begin(), words.end());

        // build ans
        string ans="";
        for(int i=0; i<words.size(); i++){
            ans+=words[i];

             if(i != words.size() - 1) {
                ans += " ";
            }
        }

       return ans;
       
    }
};