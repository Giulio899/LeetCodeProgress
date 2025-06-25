class Solution {
    public int strStr(String haystack, String needle) {
        int needleLength = needle.length();

        if(haystack.equalsIgnoreCase(needle)) return 0;

        for(int i = 0; i <= haystack.length() - needleLength; i++){
            if(haystack.substring(i, i + needleLength).equalsIgnoreCase(needle)) return i;
        }

        return -1;
    }
}