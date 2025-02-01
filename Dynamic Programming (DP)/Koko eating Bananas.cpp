// Question link: 
// https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/0


class Solution {
    
public:
    int calculateTime(int speed, const vector<int>& piles) {
        int totalTime = 0;
        for(int pile : piles) {
            totalTime += ceil((double)pile / speed);
        }
        return totalTime;
    }
    
    int Solve(int N, vector<int>& piles, int H) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int result = right;
        
        while(left <= right) {
            int mid = left + (right - left) / 2;
            int timeRequired = calculateTime(mid, piles);
            
            if(timeRequired <= H) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        
        return result;
    }

};