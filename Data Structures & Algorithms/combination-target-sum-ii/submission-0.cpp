class Solution {
public:
    void helper(vector<vector<int>> &ans,vector<int> &curr,vector<int> &nums,int index,int target)
    {
         if(target==0){
            ans.push_back(curr);
            return ;
         }
         for(int i=index;i<nums.size();i++)
         {
            if(i>index && nums[i]==nums[i-1])
            continue;
            if(nums[i]>target)
            break;
            curr.push_back(nums[i]);
            helper(ans,curr,nums,i+1,target-nums[i]);
            curr.pop_back();
         }
    }

    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> curr;
        helper(ans,curr,nums,0,target);
        return ans;
    }
};
