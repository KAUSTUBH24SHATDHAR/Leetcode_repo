class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char>st1,st2;
        string str1,str2;
        
        for(int i=0;i<s.size();i++){
            
            if(!st1.empty() && s[i]=='#'){
                st1.pop();
            }
            
                else if(s[i]!='#'){
                    
                     st1.push(s[i]);
                }
            
           
            
                
            }
        
         
        for(int i=0;i<t.size();i++){
            
            if(!st2.empty() && t[i]=='#'){
                st2.pop();
            }
            
                 else if(t[i]!='#'){
                    
                     st2.push(t[i]);
                }
            
        }
            
            while(!st1.empty()){
                str1.push_back(st1.top());
                st1.pop();
            }
            
            while(!st2.empty()){
                str2.push_back(st2.top());
                st2.pop();
            }
            
            
            
        return str1==str2;
    }
};