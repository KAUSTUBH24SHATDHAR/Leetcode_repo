class Solution {
public:
    
    int findmiss(vector<int>arr, int k){
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=k){
                k++;
            }
            
            else{
                break;
            }
        }
        
        return k;
    }
    int findKthPositive(vector<int>& arr, int k) {
        
        int ans = findmiss(arr,k);
        
        
        return ans;
    }
};