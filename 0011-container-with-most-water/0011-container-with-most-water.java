class Solution {
    public int maxArea(int[] height) {
        if(height == null || height.length == 0) return 0;
			
			int res = (height.length -1) * (Math.min(height[0], height[height.length - 1]));
            int last_i = -1;
			for(int i = 0; i < height.length - 1; i++){
                if(last_i>=0 && height[last_i] >= height[i]) continue;
				for(int j = i + 1; j < height.length; j++){
					int actual = (j - i) * (Math.min(height[i], height[j]));
					if(actual > res) res = actual;
				}
                last_i = i;
			}
			return res;
    }
}