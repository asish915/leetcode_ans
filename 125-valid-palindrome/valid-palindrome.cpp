class Solution {
public:
    bool isPalindrome(string s) {
        string alphanum;
        for(auto ch : s){
            if(isalnum(ch)){
                alphanum += tolower(ch);
            }
        }

        string rev = alphanum;
        reverse(rev.begin(), rev.end());
        if(rev == alphanum){
            return true;
        }
        return false;
        
    }
};