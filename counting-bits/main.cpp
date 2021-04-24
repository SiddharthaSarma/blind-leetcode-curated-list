class Solution {
public:
    vector<int> countBits(int num) {
      vector<int> result;
      for (int i = 0; i <= num; i++) {
        int count = bitset<32>(i).count();
        result.push_back(count);
      }
      return result;
    }
};
