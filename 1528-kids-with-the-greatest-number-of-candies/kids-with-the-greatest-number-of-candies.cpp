class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maximum=-1;
        int n=candies.size();
        for(int i=0; i<n;i++){
            maximum=max(maximum,candies[i]);
        }
        for(int j=0;j<n;j++){
            if((candies[j]+extraCandies)>=maximum){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};