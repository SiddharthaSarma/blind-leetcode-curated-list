class Solution {
  public:
    int maxArea(vector < int > & height) {
      int l = 0;
      int r = height.size() - 1;
      int maxVal = 0;
      while (l < r) {
        maxVal = max(maxVal, (r - l) * min(height[r], height[l]));
        if (height[r] < height[l]) r--;
        else l++;
      }
      return maxVal;
    }
};
