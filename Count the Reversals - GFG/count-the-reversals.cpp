//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    
    if(s.size() & 1){
        
        return -1;
    }
    
    stack<char>st;
    
    for(auto ch: s){
        
       if(ch=='{'){
           st.push(ch);
       }
       
       else if(!st.empty() && st.top()=='{'){
           st.pop();
       }
       
       else{
           
           st.push(ch);
       }
       
    }
       
     int count =0;
       
       while(!st.empty()){
           
           char ans1=st.top(); st.pop();
           char ans2=st.top(); st.pop();
           
           if(ans1==ans2){
               count++;
           }
           
           else{
               count+=2;
           }
           
           
       }
       
       return count;
    
   
}