class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        int lastPos = -1;
        int i;

        for(i=n-1; i>=0; i--){
            if((num[i] - '0') % 2 == 1){
                lastPos = i;
                break;
            }
        }
        if(lastPos == -1)
            return "";
        i=0;
        while(i < n){
            if(num[i] != '0'){
                break;

            }
            i++;
        }
        return num.substr(i, lastPos - i + 1);
        
    }
};