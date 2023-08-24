class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {

        vector<int>minute;


        //String se integer me conversion

        for(int i=0;i<timePoints.size();i++){

            string curr = timePoints[i];

            int hours= stoi(curr.substr(0,2)  );
            int min= stoi(curr.substr(3,2)  );
            int totalMinutes = hours*60 + min; 
            minute.push_back(totalMinutes);
        }


        //Sort karlo descending me 

        sort(minute.begin(),minute.end());

        int mini = INT_MAX;
        int n=minute.size();

        for(int i=0;i<n-1;i++){

            int diff = minute[i+1]-minute[i];

            mini=min(mini,diff);
            
        }

        //Something Missing 12 am or 23 pm wala case 
        int lastDiff1 = (minute[0] + 1440) - minute[n-1];
        int lastDiff2 = (minute[n-1]-minute[0]);
        int lastDiff = min(lastDiff1,lastDiff2);
        mini = min(mini, lastDiff);

        return mini;
        
    }
};