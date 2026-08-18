class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int n=s.size();
     int left=0;
     int maxlength=0;
     unordered_map<char,int> mp;
     for(int right=0;right<n;right++)
     {
        mp[s[right]]++;
        while(mp[s[right]]>1)
        {
            mp[s[left]]--;
            left++;
        }

        maxlength=max(maxlength,right-left+1);
     } 
     return maxlength;  
    }
};
