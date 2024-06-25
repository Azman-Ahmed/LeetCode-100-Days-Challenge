class Solution {
public:
    vector<int> getRow(int rowIndex) {

        int n = rowIndex;
        vector<int> ans(n+1), tem(n+1);
        if(n==0)
        {
            ans[0] = 1;
            return ans;
        }

        ans[0] = 1;
        ans[1] = 1;
        tem[0] = 1;

        for(int i=2; i<=n; i++)
        {
            for(int j = 1; j < i; j++) tem[j] = ans[j] + ans[j-1];
            tem[i] = 1;
            for(int j = 0; j <= i; j++) ans[j] = tem[j];

            for(int j = 0; j <= i; j++) cout<<ans[j]<<" ";
            cout<<endl;
        }




        return ans;

    }
};

