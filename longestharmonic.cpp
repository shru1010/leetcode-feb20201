class Solution {
public:
    int findLHS(vector<int>& nums) {
          int ans=0;
        unordered_map<int, int> mp;
        for (auto i:nums) mp[i]++;
		//must get both key and value
        for (auto &[m,n]:mp) {
			//use the key to find the other part of the harmonious subsequence 
			//no need to get the m-1 element.
            auto after = mp.find(m+1);
			//check we aren't pointing to invalid address
            if (after!=mp.end())
				//add value of mp[m] and mp[m+1] and see if it is a larger subsequence than what we already have
                ans=max(ans,n+after->second);
        }
        return ans;   
    }
};
