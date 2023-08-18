class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        
        int n=grades.size();
        int x=1;
        
        while(x*(x+1)/2<=n){
            x++;
        }
        
        return x-1;
        
    }
};