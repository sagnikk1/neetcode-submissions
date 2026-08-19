class Solution {
public:
    void helper(vector<vector<int>> &ans,vector<int> &curr,vector<int> &nums,int index,int target)
    {
        if(target<0)
        return;
        if(target==0)
        {
            ans.push_back(curr);
            return ;
        }
        if(index==nums.size())
        return ;
        curr.push_back(nums[index]);
        helper(ans,curr,nums,index,target-nums[index]);
        curr.pop_back();
        helper(ans,curr,nums,index+1,target);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        helper(ans,curr,nums,0,target);
        return ans;
    }
};
