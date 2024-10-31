class Solution {
public:
    string convert(string s, int n) {
        if(n == 1) return s;
        vector<string>v(n); 
        int j = 0, dir = -1;

        for(int i = 0; i < s.length();v[j]+=s[i], i++, j+=dir)
            if(j == n - 1 || j == 0) dir *= (-1); 

        string res;
        for(auto &it : v) res += it; 
        return res;
        
    }
};