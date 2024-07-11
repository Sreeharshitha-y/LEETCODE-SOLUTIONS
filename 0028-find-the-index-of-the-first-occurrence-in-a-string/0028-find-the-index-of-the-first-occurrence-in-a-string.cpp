class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        // Edge case: If needle is an empty string, return 0
        if (m == 0) return 0;

        for (int i = 0; i <= n - m; i++) {
            // Check if the substring of haystack starting from i matches needle
            if (haystack.substr(i, m) == needle) {
                return i;
            }
        }
        return -1; // Return -1 if needle is not found in haystack
    }
};
