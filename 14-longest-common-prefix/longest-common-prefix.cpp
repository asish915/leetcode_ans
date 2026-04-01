class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()){
                return "";
            }
            
            sort(strs.begin(), strs.end());
            int n = strs.size();
            string first = strs[0];
            string last = strs[n-1];

            int minLen = min(first.size(), last.size());
            string prefix = "";

            for (int i = 0; i <= minLen-1; i++){
                if (first[i] != last[i]){
                    return prefix; 
                }
                prefix += first[i];
            }
            return prefix;
        
    }
};