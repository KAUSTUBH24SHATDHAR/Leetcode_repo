// since we want to form minimum numbers,
// for ex- 23
// for 2 - 1,1 we cant use 0 as it will increase the minimum value
// for 3-1,1,1 we can use 3 ones in tens place and 2 ones in ones place hence ans is 3.
// as u see the result will be the greatest number in the string.

class Solution {
public:
    int minPartitions(string n) {
        int m=0;
        for(int i=0;i<n.size();i++){
            if(n[i]-'0'>m)
            m=n[i]-'0';
        }
        return m;
    }
};