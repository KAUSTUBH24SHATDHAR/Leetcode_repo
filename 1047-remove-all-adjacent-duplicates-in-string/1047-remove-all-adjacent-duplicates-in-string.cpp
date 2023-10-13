class Solution{
    public:
    
        string removeDuplicates(string s){
            
            stack<char>st;
            
            for(auto ch: s){
                
                if(st.empty()){
                    st.push(ch);
                }
                
                else if(!st.empty() && st.top() == ch){
                    st.pop();
                }
                
                else{
                    st.push(ch);
                }
            }
            
            string ans;
            
            while(!st.empty()){
                
                ans+=st.top();
                st.pop();
            }
            
            reverse(ans.begin(),ans.end());
            
            return ans;
        }
    
};






























// class Solution {
// public:
//     string removeDuplicates(string s) {

//         string ans="";

//         int i=0;

//         for(i=0;i<s.length();i++){
//              if(ans.length()>0){

//                 if(ans[ans.length()-1]==s[i]){
//                     ans.pop_back();
//                 }

//                 else{

//                     ans.push_back(s[i]);
//                 }
//             }

//             else{

//                 ans.push_back(s[i]);
//             }

               
//         }

//         return ans;
//     }
     



//};