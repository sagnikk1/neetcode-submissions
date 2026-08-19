class Solution {
public:
    void helper(vector<int> &nums,vector<vector<int>> &ans,int index,vector<int> &curr)
    {
        if(index==nums.size())
        {
            ans.push_back(curr);
            return ;
        }
        curr.push_back(nums[index]);
        helper(nums,ans,index+1,curr);
        curr.pop_back();
        helper(nums,ans,index+1,curr);
    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        helper(nums,ans,0,curr);
        return ans;
    }
};
