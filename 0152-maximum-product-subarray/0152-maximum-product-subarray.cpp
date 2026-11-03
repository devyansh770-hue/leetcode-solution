class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        long long currentMin = nums[0];
        long long currentMax = nums[0];
        long long maxProduct = nums[0];

        for(int i=1;i<n;i++){
           long long currValue = nums[i];

           long long prevMax = currentMax;
           long long prevMin = currentMin;

           currentMax = max({currValue, prevMax * currValue, prevMin * currValue});
           currentMin = min({currValue, prevMax * currValue, prevMin * currValue});

           if(currentMax > maxProduct) maxProduct = currentMax;
        }
        return maxProduct;
    }
};