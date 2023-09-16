class Solution {
public:
    string toLowerCase(string s) {
        string str="";
        for(int i=0;i<s.length();i++){
            char a=tolower(s[i]);
            str+=a;
        }
        return str;
    }
};