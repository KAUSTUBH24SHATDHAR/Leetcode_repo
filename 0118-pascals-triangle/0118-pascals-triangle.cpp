class Solution {
public:
    
    vector<int>generaterows(int numRows){
        
        vector<int>sol;
        int ans =1;
        
        sol.push_back(1);
        
        for(int i=1;i<numRows;i++){
            
            ans = ans*(numRows-i);
            ans = ans/i;
            
            sol.push_back(ans);
            
        }
        
        return sol;
    }
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>ans;
        
        for(int i=1;i<=numRows;i++){
            
            ans.push_back(generaterows(i));
        }
        
        return ans;
        
    }
};