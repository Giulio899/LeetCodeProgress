class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        int index=0;
        string current;
        while(true){
            if(strs[0].size()<index+1) return res;
            current=string(1, strs[0][index]);
            for(auto str : strs){
                if(string(1, str[index]) != current) return res;
            }
            res+=current;
            index++;
        }
    
    }
};