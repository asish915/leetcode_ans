class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        // Two Direction Traversal Approach
        int n = words.size();
        int right = 0;
        while (right < n){
            int i = (startIndex + right) % n;
            if(words[i] == target){
                break;
            }
            right++;
        }

        int left = 0;
        while (left < n){
            int i = (startIndex - left + n) % n;
            if(words[i] == target){
                break;
            }
            left++;
        }
        int dist = min(right , left);
        if (dist == n){
                return -1;
        } 
        return dist;


        
    }
};