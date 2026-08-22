// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        
        while (left < right) {
            // Use this formula instead of (left + right) / 2 to prevent integer overflow
            int mid = left + (right - left) / 2;
            
            if (isBadVersion(mid)) {
                // If mid is bad, the first bad version is either mid or to its left
                right = mid;
            } else {
                // If mid is good, the first bad version must be strictly to its right
                left = mid + 1;
            }
        }
        
        // When left == right, we have narrowed down to the first bad version
        return left;
    }
};
