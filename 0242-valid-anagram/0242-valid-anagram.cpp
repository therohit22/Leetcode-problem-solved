class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size())
           return false;

        // for(int i=0;i<s.size(); i++){
        //    int count1=0;
        //    int count2=0;

        //     for(int j=0;j<s.size(); j++){
        //         if(s[i]==s[j]) count1++;
        //         if(s[i]==t[j]) count2++;
                
        //     }

        //         if(count1 != count2)
        //              return false;
        //     }
        //     return true;
        
           vector<int> freq(26,0);
           for(char ch :s){
            freq[ch-'a']++;
           }   
           for(char ch :t){
            freq[ch-'a']--;
           }
        // check wheather freq becomes zero at last then only it is anagram
        for(int i=0; i<26; i++){
           if(freq[i]!=0)
           return false;
        }   

          return true;
    }
};