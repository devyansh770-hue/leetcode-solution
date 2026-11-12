class Solution {
public:
    int find(int m, int n, int r, int c, map<vector<int>,int>&mp){
        if(r >= m || c >= n) return 0;
        if(r == (m-1) && c == (n-1)) return 1;
        if(mp.find({r,c}) != mp.end()){
            return mp[{r,c}];
        }
        mp[{r,c}] = find(m,n,r+1,c,mp) + find(m,n,r,c+1,mp);

        return mp[{r,c}];
    }
    int uniquePaths(int m, int n) {
        map<vector<int>,int> mp;
        int r = 0;
        int c = 0;

        int ans = find(m,n,r,c,mp);
        return ans;
    }
};