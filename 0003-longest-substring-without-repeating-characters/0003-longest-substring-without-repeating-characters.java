class Solution {
    public int lengthOfLongestSubstring(String s) {
        int res = 0;
        int j = 0;

        if(s.length() == 1) return 1;

        for(int i = 1; i < s.length() + 1; i++){
            String current = s.substring(j, i);
            long n = current.chars().count();
            if(current.chars().distinct().count() == n) res = Math.toIntExact(Math.max(res, n));
            else{
                j++;
                i = j + res;
            }
        }

        return res;
    }
}