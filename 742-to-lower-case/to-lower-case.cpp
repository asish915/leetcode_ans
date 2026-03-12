class Solution {
public:
    string toLowerCase(string s) {

        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
        return s;

/*here ch refers to each character inside the string s, by changing ch it will change string s also, as it is referenced*/
        // for(char &ch : s) {   
        //     ch = tolower(ch);
        // }
        // return s;   
    }
};