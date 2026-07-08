class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0;
        int high= height.size() -1;
        int maxWater=0;
        while(low<high){
            int currentHeight= min(height[low], height[high]);
            int width = high-low;
            //int area= currentHeight*width;
            maxWater = max(maxWater, currentHeight*width);
            if(height[low]<height[high])
            low++;
            else
            high--;
        }
        return maxWater;
    }
};