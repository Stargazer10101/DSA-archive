// Question Link
// https://www.geeksforgeeks.org/problems/unique-paths-in-a-grid--170647/0



//User function Template for javascript
/**
 * @param {number} n
 * @param {number} m
 * @param {number[][]} grid
 * @returns {number}
*/

class Solution {
    //Function to find the number of unique paths.
    uniquePaths(n, m, grid) {
    const MOD = 1000000007;

    // Initialize a dp array with zeros
    let dp = Array.from({ length: n }, () => Array(m).fill(0));

    // Set the starting point
    dp[0][0] = grid[0][0] === 1 ? 1 : 0;

    // Fill the dp array
    for (let i = 0; i < n; i++) {
        for (let j = 0; j < m; j++) {
            // If the current cell is blocked, continue
            if (grid[i][j] === 0) continue;

            // If moving down is valid
            if (i > 0) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
            }

            // If moving right is valid
            if (j > 0) {
                dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
            }
        }
    }

    // The answer is the number of ways to reach the bottom-right corner
    return dp[n - 1][m - 1];
}
}


 