//Approach - Try to find factor of 5 in factorial also power of 5 factors do
// number of zeros= n/5 + n/25 + n/125 +......
// TC-O(log N) , SC- O(1)
class Solution {
public:
    int trailingZeroes(int n) {
        int zeros = 0;
        while (n) {
            zeros += n / 5;
            n /= 5;
        }
        return zeros;   
    }
};