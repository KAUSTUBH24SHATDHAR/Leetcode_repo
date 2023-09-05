class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) {
        set<int>st;
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(i<x)continue;
            st.insert(nums[i-x]);
            auto ind=st.lower_bound(nums[i]);
            if(ind==st.end())ind--;
            ans=min(ans,abs(nums[i]-*ind));
            if(ind!=st.begin())
                ans=min(ans,abs(nums[i]-*(--ind)));
        }
        return ans;
    }
};