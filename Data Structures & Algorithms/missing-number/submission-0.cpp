class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        int ans=(n*(n+1))/2-sum;

        return ans;
    }
};
