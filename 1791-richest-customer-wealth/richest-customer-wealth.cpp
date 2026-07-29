class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth=0;
        for (auto i:accounts){
            int sum=0;
            for(int j:i){
                sum+=j;
            }
            maxWealth=max(sum, maxWealth);
        }
        return maxWealth; 
    }
};