// Question Link
// https://www.geeksforgeeks.org/problems/graph-and-vertices/0


// User function Template for C++
class Solution {
  public:
    long long count(int n) {
        // your code here
        //max number of edges = n(n-1)/2
        int power= n*(n-1)/2;
        return pow(2, power);
        
    }
};