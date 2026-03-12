class Solution {
public:
    string toLowerCase(string s) {
        // Solution1
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
        return s;

        // Solution2
        /*here ch refers to each character inside the string s, by changing ch it will change string s         also, becuz ch is referencing to string s*/

        // for(char &ch : s) {   
        //     ch = tolower(ch);
        // }
        // return s;   
    }
};