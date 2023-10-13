class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        
        int start=0;
        int end= mountainArr.length()-1;
        
        while(start<end){
            
            int mid= start+(end-start)/2;
            
            if(mountainArr.get(mid)<mountainArr.get(mid+1)){
                start=mid+1;
            }
            
            else if(mountainArr.get(mid)>mountainArr.get(mid+1)){
                
                end=mid;
            }
        }
        
        int peak = end;
        
        
        int s = 0;
        int e = peak;
        
        while(s<=e){
            
            int mid = s+(e-s)/2;
            
            int curr=mountainArr.get(mid);
            
            if(curr==target){
                return mid;
            }
            
            else if(curr>target){
                e=mid-1;
            }
            
            else{
                s=mid+1;
            }
        }
        
         int st = peak+1;
        int en = mountainArr.length()-1;
        
        while(st<=en){
            
            
            
            int mid = st+(en-st)/2;
            int curr = mountainArr.get(mid);
            
            if(curr==target){
                return mid;
            }
            
            else if(curr<target){
                en=mid-1;
            }
            
            else{
                st=mid+1;
            }
        }
        
        return -1;
        
    }     
};