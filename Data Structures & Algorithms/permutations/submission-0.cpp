class Solution {
public:
    void helper(vector<int> &nums,vector<vector<int>> &ans,vector<int> &curr,int index,vector<int> &used)
    {
        if(curr.size()==nums.size())
        {
            ans.push_back(curr);
            return ;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(used[i]==1)
            continue;
            used[i]=1;
            curr.push_back(nums[i]);
            helper(nums,ans,curr,i+1,used);
            curr.pop_back();
            used[i]=0;

        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> used(nums.size(),0);
        vector<int> curr;
        vector<vector<int>> ans;
        helper(nums,ans,curr,0,used);
        return ans;
    }
};
