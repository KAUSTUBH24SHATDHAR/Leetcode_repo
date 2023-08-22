class Solution
{
public:
    bool possibleBloom(vector<int> bloomDay, int m, int k, int mid)
    {
        int count = 0;
        int days = 0;

        for (int i = 0; i < bloomDay.size(); i++)
        {
            if (bloomDay[i] <= mid)
            {
                count++;
            }

            else
            {
                days += count / k;
                count = 0;
            }
        }

        days += count / k;

        if (days >= m)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
    int minDays(vector<int> &bloomDay, int m, int k)
    {
        long long check = 1;

        check *= m;
        check *= k;
        if (check > bloomDay.size())
        {
            return -1;
        }

        else
        {

            int mini = INT_MAX;
            int maxi = INT_MIN;

            for (int i = 0; i < bloomDay.size(); i++)
            {

                mini = min(bloomDay[i], mini);
                maxi = max(bloomDay[i], maxi);
            }

            int s = mini;
            int e = maxi;

            int ans = -1;

            while (s <= e)
            {
                int mid = s + (e - s) / 2;

                if (possibleBloom(bloomDay, m, k, mid))
                {
                    ans = mid;
                    e = mid - 1;
                }

                else
                {
                    s = mid + 1;
                }
            }

            return ans;
        }
    }
};