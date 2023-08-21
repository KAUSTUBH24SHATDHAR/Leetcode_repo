class Solution {
public:
    
    int findpiviot(vector<int>nums){
    int s=0;
    int e=nums.size()-1;
    
    
    
    while(s<=e){
        
        int mid=s+(e-s)/2;
        
        if(s==e){
            return s;
        }
        
        if(mid+1<=nums.size() && nums[mid]>nums[mid+1]){
            return mid;
        }
        
        if(mid-1>=0 && nums[mid]<nums[mid-1]){
            return mid-1;
        }
        
        else if(nums[s]>nums[mid]){
            e=mid-1;
        }
        
        else{
            s=mid+1;
        }
    }
    
    return -1;
}
    
    int binarySearch(vector<int>nums,int s,int e,int target){
    
  
    
    while(s<=e){
        
         int mid=s+(e-s)/2;
         
        if(nums[mid]==target){
            return mid;
        }
        
        else if(nums[mid]>target){
            e=mid-1;
        }
        
        else{
            s=mid+1;
        }
    }
    
    return -1;
}
    
    int search(vector<int>&nums,int target){
        
        int piviotIndex = findpiviot(nums);
        int ans = 0;
        
        if(target>=nums[0] && target <= nums[piviotIndex]){
            
            ans=binarySearch(nums,0,piviotIndex,target);
        }
        
        else{
            ans = binarySearch(nums, piviotIndex+1, nums.size()-1, target);
        }
           
         return ans;
    }
    
   
    
};