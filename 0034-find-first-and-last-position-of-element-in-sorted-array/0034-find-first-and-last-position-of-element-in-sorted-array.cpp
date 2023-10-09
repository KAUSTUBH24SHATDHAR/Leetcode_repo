class Solution {
public:
    
    int findfirstindex(vector<int>nums, int target){
    
    int s=0;
    int end=nums.size()-1;
    
    int ans= -1;
    
    while(s<=end){
        
        int mid = s+(end-s)/2;
        
        if(nums[mid]==target){
            ans=mid;
            end=mid-1;
        }
        
        else if(nums[mid]>target){
            end=mid-1;
        }
        
        else{
            s=mid+1;
        }
    }
    
    return ans;
    
}

int findlastindex(vector<int>nums, int target){
    
    int s=0;
    int end=nums.size()-1;
    
    int ans= -1;
    
    while(s<=end){
        
        int mid = s+(end-s)/2;
        
        if(nums[mid]==target){
            ans=mid;
            s=mid+1;
        }
        
        else if(nums[mid]>target){
            end=mid-1;
        }
        
        else{
            s=mid+1;
        }
    }
    
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>a;
        
        a.push_back(findfirstindex(nums,target));
        a.push_back(findlastindex(nums,target));
        
        
        return a;
    }
};