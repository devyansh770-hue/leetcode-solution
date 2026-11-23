class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int sum = 0;
        int l = 0;
        int ans = 0;
        for(int r=0;r<n;r++){
            sum+=arr[r];

            if(r >= k){
                sum -= arr[l];
                l++;
            }
            if(r >= k-1){
                int check = sum / k;
                if(check >= threshold){
                    ans++;
                }
            }
        }
        return ans;

    }
};