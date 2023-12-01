#include <vector>
#include <numeric> // For std::accumulate

class Solution {
public:
    // Function to calculate the sum of absolute differences of each element
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        // Calculate the sum of the entire array
        int total_sum = std::accumulate(nums.begin(), nums.end(), 0);
        // Initialize variable to keep track of the sum of elements seen so far
        int partial_sum = 0;
        // Get number of elements in the array
        int n = nums.size();
        // Initialize result vector with the same size as input
        vector<int> result(n);
      
        // Iterate over each element in the array
        for (int i = 0; i < n; ++i) {
            // Calculate the sum of absolute differences for the current element
            int absolute_difference_sum = nums[i] * i - partial_sum 
                                          + total_sum - partial_sum 
                                          - nums[i] * (n - i);
            // Store the result in the corresponding position
            result[i] = absolute_difference_sum;
            // Update the partial sum with the value of the current element
            partial_sum += nums[i];
        }
        // Return the final result vector
        return result;
    }
};