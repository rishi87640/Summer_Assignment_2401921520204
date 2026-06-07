class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
      int currentsum=0;

      for(int i=0;i<k;i++)
      {
        currentsum+=nums[i];
      }

      int maxsum=currentsum;

      for(int i=k;i<nums.size();i++)
      {
        currentsum=currentsum-nums[i-k]+nums[i];

        if(currentsum>maxsum)
        {
            maxsum=currentsum;
        }
      }

      return (double)maxsum/k;


    }
};