class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26, 0);
        for (char ch : s1) freq[ch - 'a']++;
        int left = 0;
        for (int right = 0; right < s2.size(); right++) {
            freq[s2[right]-'a']--;
            if (right - left + 1 > s1.size()) {
                freq[s2[left] - 'a']++;
                left++;
            }
            if (all_of(freq.begin(), freq.end(), [](int x) {
                return x == 0;
            }))
                return true;
        }
        return false;
    }
};
