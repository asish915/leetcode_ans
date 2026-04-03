class Solution {
private:
    // Sort by frequency descending
    // If frequency same, sort lexicographically ascending
    static bool comparator(pair<int, char> p1, pair<int, char> p2) {
        if (p1.first > p2.first) return true;
        if (p1.first < p2.first) return false;
        return p1.second < p2.second;
    }

public:
    string frequencySort(string s) {
        pair<int, char> freq[62];
        int idx = 0;

        // digits: 0-9
        for (char ch = '0'; ch <= '9'; ch++) {
            freq[idx++] = {0, ch};
        }

        // uppercase: A-Z
        for (char ch = 'A'; ch <= 'Z'; ch++) {
            freq[idx++] = {0, ch};
        }

        // lowercase: a-z
        for (char ch = 'a'; ch <= 'z'; ch++) {
            freq[idx++] = {0, ch};
        }

        // Count frequency
        for (char ch : s) {
            if (ch >= '0' && ch <= '9') {
                freq[ch - '0'].first++;
            }
            else if (ch >= 'A' && ch <= 'Z') {
                freq[10 + (ch - 'A')].first++;
            }
            else if (ch >= 'a' && ch <= 'z') {
                freq[36 + (ch - 'a')].first++;
            }
        }

        // Sort by frequency
        sort(freq, freq + 62, comparator);

        string ans = "";

        // Build answer
        for (int i = 0; i < 62; i++) {
            ans += string(freq[i].first, freq[i].second);
        }

        return ans;
    }
};