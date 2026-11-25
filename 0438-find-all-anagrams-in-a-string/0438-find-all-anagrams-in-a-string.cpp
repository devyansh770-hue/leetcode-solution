
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char, int> count;
        unordered_map<char, int> window;

        vector<int> ans;

        int size = p.length();
        int n = s.length();
        int l = 0;

        if (size > n) return ans;

        // Store frequency of characters in p
        for (auto i : p) {
            count[i]++;
        }

        // Number of distinct characters
        int abc = count.size();

        for (int right = 0; right < n; right++) {

            // Add incoming character
            window[s[right]]++;

            // Maintain fixed window size
            if (right - l + 1 > size) {
                window[s[l]]--;

                if (window[s[l]] == 0) {
                    window.erase(s[l]);
                }

                l++;
            }

            // Check if current window is an anagram
            if (right - l + 1 == size) {
                if (window == count) {
                    ans.push_back(l);
                }
            }
        }

        return ans;
    }
};
