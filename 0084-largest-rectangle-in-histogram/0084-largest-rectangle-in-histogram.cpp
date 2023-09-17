class Solution {
public:
    
    vector<int>prevsmallerelement(vector<int>heights){
    
    vector<int>ans(heights.size());
    
    stack<int>st;
    st.push(-1);
    
    for(int i=0;i<heights.size();i++){
        
        int curr= heights[i];
        
        while(st.top()!=-1 && heights[st.top()]>=curr){
            st.pop();
        }
        
        ans[i]= st.top();
        st.push(i);
    }
    
    return ans;
}

vector<int>nextsmallerelement(vector<int>heights){
    
    vector<int>ans(heights.size());
    
    stack<int>st;
    st.push(-1);
    
    for(int i=heights.size()-1;i>=0;i--){
        
        int curr= heights[i];
        
        while(st.top()!=-1 && heights[st.top()]>=curr){
            st.pop();
        }
        
        ans[i]= st.top();
        st.push(i);
    }
    
    return ans;
}
    
    
    int largestRectangleArea(vector<int>& heights) {
        
        
     vector<int>prev = prevsmallerelement(heights);
     
      vector<int>next = nextsmallerelement(heights);
      
      int maxarea = INT_MIN;
      
      for(int i=0;i<heights.size();i++){
          
          int len = heights[i];
          
          if(next[i]==-1){
              next[i]= heights.size();
          }
          
          
          int width = next[i]-prev[i]-1;
          
          int area = len *width;
          
          maxarea = max(maxarea,area);
      }
    
    return maxarea;
        
    }
};