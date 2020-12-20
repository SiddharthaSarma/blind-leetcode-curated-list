class Solution {
public:
  int findMin(vector<int>& arr) {
    int l = 0;
    int r = arr.size();
    while(l < r) {
      int m = l + (r - l)  / 2;
      if (m!= 0 && arr [m] < arr[m - 1]) {
        return arr[m];
      }
      if (arr[l] < arr[m] && arr[m] > arr[r - 1]) {
        l = m + 1;
      } else {
        r = m;
      }
    }
    return arr[l];
  }
};