class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long totalLength=0;
        for(auto character : s){
            if(isdigit(character)){
                totalLength*=character-'0';
            }
            else{
                totalLength++;
            }
        }
        for(int i=s.size()-1;i>=0;i--){
            if(isdigit(s[i])){
                totalLength/=(s[i]-'0');
                k=k%totalLength;
            }
            else{
                if(k==0 || totalLength==k)
                return string(1, s[i]);
                totalLength--;
            }
        }
        return "";   
    }
};