class Solution {
public:
    
    int maxelement(vector<int>weights){
        int max=INT_MIN;
        
        for(int i=0;i<weights.size();i++){
            if(weights[i]>max){
                max=weights[i];
            }
        }
        return max;
    }
    
    int sumarr(vector<int>weights){
        int sum=0;
        
        for(int i=0;i<weights.size();i++){
            sum=sum+weights[i];
        }
        
        return sum;
    }
    
    int finddays(vector<int>weights,int mid){
        
        int load=0;
        int day=1;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>mid){
                day=day+1;
                load=weights[i];
            }
            
            else{
                load=load+weights[i];
            }
        }
        
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        
        int s=maxelement(weights);
        
        int e=sumarr(weights);
        
        int ans=0;
        
        
       
        
        while(s<=e){
            
            int mid=s+(e-s)/2;
             
          int d=finddays(weights,mid);
            
            
            
            if(d<=days){
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