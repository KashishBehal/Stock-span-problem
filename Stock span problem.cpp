class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
      stack<pair<int , int>>s;
      vector<int>ans;
      for(int i=0;i<n;i++){
          int days=1;
           while(!s.empty() && s.top().first<=price[i]){
                  days=days+s.top().second;
                  s.pop();
              }
               s.push({ price[i],days});
              ans.push_back(days);
      }
          return ans;
    }
};
