class Solution {
public:
    string removeDigit(string number, char digit) {
        int n= number.size();
        int last = 0;

        for(int i=0;i<=n-1;i++){
            if(number[i] == digit){
                last = i;

                if(number[i+1] > digit && (i+1) < n){
                    return number.substr(0,i)+number.substr(i+1);
                }
            }
        }
        return number.substr(0,last)+number.substr(last+1);
        
    }
};