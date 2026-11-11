class Solution {
public:
    int fib1(int n, unordered_map<int,int> &m){
        if(n==0) return 0;
        if(n==1) return 1;

        if(m.find(n) != m.end()){
            return m[n];
        }
        else{
            m[n] = fib1(n-1,m) + fib1(n-2,m);
            return m[n];
        }

    }
    int fib(int n) {
        unordered_map<int,int> m;
        int ans = fib1(n,m);

        return ans;
        
    }
};