class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int>v;
        
        int n= rowIndex+1;
        
        
        long long ans= 1;
        v.push_back(ans);
        
        for(int i=1;i<n;i++){
            
            ans = ans*(n-i);
            ans= ans/i;
            
            v.push_back(ans);
        }
        
        return v;
        
    }
       
};