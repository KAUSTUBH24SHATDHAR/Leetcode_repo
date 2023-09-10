class Solution {
public:
    const int MOD = 1e9 + 7;  // Modulus for calculations

    int countOrders(int numberOfPairs) {
        long long count = 1 ;

        // Iterate over all values of pairs from 1 to n
        for (int currentPairs = 1; currentPairs <= numberOfPairs; currentPairs++) {
            // Calculate the number of valid orders for the current number of pairs
            count = count * (2 * currentPairs - 1) * currentPairs % MOD;
        }

        return count; // Return the result for n pairs
    }
};