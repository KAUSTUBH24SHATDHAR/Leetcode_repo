class Solution {
public:
    
    int findmax(vector<int>nums){
        int max=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            
            if(max<nums[i]){
                max=nums[i];
            }
            
        }
        
        return max;
     
    }
    
    
  int findsum(vector<int>nums, int mid){
        
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
        float x = (float)nums[i]/mid;
            sum+=ceil(x);        
        }
        
        return sum;
    }

        
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int s=1;
        int e=findmax(nums);
        
        int ans=-1;
        
        while(s<=e){
            
        
        int mid=(s+e)/2;
        
       int sum = findsum(nums,mid);
        
        if(sum<=threshold){
            ans=mid;
            e=mid-1;
        }
        
        else{
            s=mid+1;
        }  
      }   
        return ans;
    }
};
// class Solution {
// public:

//     int SumOfDivisor(vector<int>& nums, int Day){
//         int sum = 0;
//         for(int i = 0;i<nums.size();i++){
//             sum += ceil((double)nums[i]/(double)(Day));
//         }
//         return sum;
//     }
//     int smallestDivisor(vector<int>& nums, int threshold) {
//         int maxi = INT_MIN;
//         for(int i = 0;i<nums.size();i++){
//             maxi = max(maxi,nums[i]);
//         }
//         int low = 1,high = maxi,ans = -1;
//         while(low <= high){
//             int mid = (low + high)/2;
//             if(SumOfDivisor(nums,mid) <= threshold){
//                 ans = mid;
//                 high = mid - 1;
//             }
//             else{
//                 low = mid + 1;
//             }
//         }
//         return ans;
//     }
// };