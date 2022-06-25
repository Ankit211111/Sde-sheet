class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector < int > subarray;
        int maxsum = nums[0], cursum = 0;
  int s = 0;
  for (int i = 0; i < nums.size(); i++) {
    cursum += nums[i];
    if (cursum > maxsum) {
      subarray.clear();
      maxsum = cursum;
      subarray.push_back(s);
      subarray.push_back(i);

    }
    if (cursum < 0) {
      cursum = 0;
      s = i + 1;

    }
  }

  return maxsum;
    }
};