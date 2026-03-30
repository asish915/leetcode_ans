class Solution {
public:
    bool isPalindrome(string s) {
        string alphanum;
        for(auto ch : s){
            if(isalnum(ch)){
                alphanum += tolower(ch);
            }
        }

        // string rev = alphanum;
        // reverse(rev.begin(), rev.end());
        // if(rev == alphanum){
        //     return true;
        // }
        // return false;
        int n = alphanum.length();
        int left = 0, right = n - 1;

        while(left < right){
            if(alphanum[left] != alphanum[right]){
                return false;
              }
              left++;
              right--;
        }
        return true;
        
    }
};