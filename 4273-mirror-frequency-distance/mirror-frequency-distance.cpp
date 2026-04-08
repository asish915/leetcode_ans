class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int> freq (128,0);

        for (char ch : s){
            freq[ch]++;
        }
        int sum = 0;

        for (char c = 'a'; c <= 'z'; c++) {
            char m = 'z' - (c - 'a'); 

            if (c <= m) { 
                sum += abs(freq[c] - freq[m]);
            }
        }

        for (char c = '0'; c <= '9'; c++) {
            char m = '9' - (c - '0');

            if (c <= m) {
                sum += abs(freq[c] - freq[m]);
            }
        }

        return sum;
        
    }
};