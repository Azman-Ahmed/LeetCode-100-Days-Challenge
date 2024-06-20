
class Solution {
public:
    int getNumOfBouquets(vector<int>& bloomDay, int mid, int k)
    {
        int numOfBouquets = 0;
        int count = 0;

        for(int i = 0; i < bloomDay.size(); i++)
        {
            if(bloomDay[i]<=mid) count++;
            else count = 0;
            if(count==k)
            {
                numOfBouquets++;
                count = 0;
            }
        }

        return numOfBouquets;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        int start = 0;
        int end = *max_element(bloomDay.begin(), bloomDay.end());

        int ans = -1;

        while(start<=end)
        {
            int mid = (start + end) / 2;

            if(getNumOfBouquets(bloomDay, mid, k) >= m)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};
