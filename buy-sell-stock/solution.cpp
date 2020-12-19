class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int minVal = INT_MAX;
    int maxVal = 0;
    for (int &val : prices) {
      minVal = min(minVal, val);
      maxVal = max(maxVal, val - minVal);
    }
    return maxVal;
  }
};