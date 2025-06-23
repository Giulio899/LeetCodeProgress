class Solution {
    public int maxArea(int[] height) {
        int res = 0;
			for(int i = 0, j = height.length - 1; i <= j; ){
				res = Math.max(res, (j-i) * (Math.min(height[i], height[j])));
				
				if(height[i] < height[j]) i++;
				else j--;
			}
			return res;
    }
}