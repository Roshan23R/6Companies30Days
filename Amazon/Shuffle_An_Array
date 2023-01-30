//Leetcode - 384. Shuffle an Array

/*We maintain two parts of the array, the already-shuffled part, and the unshuffled part.
The unshuffled part is at the beginning of the array, and the shuffled part is built from the last element onwards. 
At every iteration, we draw an element from the unshuffled part and swap it with the current element, effectively removing the drawn element and adding the replaced element to the bag.
Then we reduce the size of the bag to account for the reduction in size of the unshuffled part.*/

//TC - O(n)

class Solution {
    vector<int> original;
    int n;
public:
    Solution(vector<int>& nums) {
        original = nums;
        n=nums.size();
    }
    
    vector<int> reset() {
        return original;
    }
    
    vector<int> shuffle() {
        vector<int> shuffled=original;
        int size=n;
        for(int i=n-1;i>=0;i--){
            int j = rand()%size;
            swap(shuffled[i], shuffled[j]);
            size--;
        }
        return shuffled;
    }
};
