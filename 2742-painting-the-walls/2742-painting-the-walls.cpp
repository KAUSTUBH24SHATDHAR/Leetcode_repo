class Solution {
public:
    int dp[501][501];
    int solve(vector<int>&cost,vector<int>&time,int i,int left,int max_value){
        if(left<=0){
            return 0;
        }
        if(i==cost.size()){
            return max_value;
        }
        if(dp[i][left]!=-1){
            return dp[i][left];
        }
        int take = cost[i]+solve(cost,time,i+1,left-1-time[i],max_value);
        int nottake = solve(cost,time,i+1,left,max_value);
        return dp[i][left] = min(take,nottake);
    }
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int max_value  = 0;
        for(int i=0;i<cost.size();i++){
            max_value+=cost[i];
        }
        for(int i=0;i<=cost.size();i++){
            for(int j=0;j<=cost.size();j++){
                dp[i][j] = -1;
            }
        }
        // memset(dp,-1,sizeof(dp));
        return solve(cost,time,0,cost.size(),max_value);
    }
};