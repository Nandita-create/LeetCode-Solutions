// First Bad Version
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        //Using Binary Search
        int low = 1;
        int high = n;
        int mid;

        while(high>low)
        {
            mid = low + (high-low)/2;
            if (isBadVersion(mid)==true)
            high = mid;

            else
            low = mid+1;
        }
        return low;
    }
};