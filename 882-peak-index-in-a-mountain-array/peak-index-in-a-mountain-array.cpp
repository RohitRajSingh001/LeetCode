class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int m=-1;
        for(int i=0; i<n; i++){
            m=max(m,arr[i]);
        }
        for(int i=0; i<n; i++){
            if(m==arr[i]){
                return i;
            }
        }
        return -1;
    }
};