class Solution {
public:
    
    int findmax(vector<int>& piles){
        int maxi=INT_MIN;
        
        for(int i=0;i<piles.size();i++){
            
            maxi=max(maxi,piles[i]);
        }
        
        return maxi;
    }
    
    bool totalhours(vector<int> &piles,int mid,int h){
        int  hourly=0;
        
        for(int i=0;i<piles.size();i++){
            
            hourly+= ceil((double)piles[i]/(double)mid);
            if(hourly > h) return 0;
                
        }
        return hourly<=h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int s=1;
        int e= findmax(piles);
    
        
        while(s<=e){
             int mid=s+(e-s)/2;
            if(totalhours(piles,mid,h)){
                e=mid-1;
            }
            
            else{
                s=mid+1;
            }
        }
        return s;
    }
};