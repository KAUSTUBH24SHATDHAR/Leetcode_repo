class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {

        vector<int>v;

        sort(nums.begin(),nums.end());

        int ans1=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int ans2=upper_bound(nums.begin(),nums.end(),target)-nums.begin();

        for(int i=ans1;i<ans2;i++){
            v.push_back(i);
        }

        return v;

    }


};