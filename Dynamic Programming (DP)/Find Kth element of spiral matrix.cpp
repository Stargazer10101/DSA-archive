//  Question Link:
// https://www.geeksforgeeks.org/problems/find-nth-element-of-spiral-matrix/0



//User function Template for javascript
/**
 * @param {number[]} a
 * @param {number} n
 * @param {number} m
 * @param {number} k
 * @returns {number}
*/

class Solution {
    //Function to find the kth element in the array.
 

    findK(A, n, m, k)
    {
        let spiral=[];
        let top= 0, left= 0, right= m-1, bottom= n-1;
        
        while(left<= right && top <= bottom){
            
        for(let i=left; i<= right; i++){
            spiral.push(A[top][i]);
            
        }
        top++;
        
        for(let i=top; i<= bottom; i++){
            spiral.push(A[i][right]);
            
        }
        right--;
        
        if(top<= bottom){
        for(let i=right; i>= left; i--){
            spiral.push(A[bottom][i]);
            
        }
        bottom--;
        
        }
        
        if(left<= right){
        for(let i=bottom; i>= top; i--){
            spiral.push(A[i][left]);
            
        }
        left++;
        
        }
        
       
    }
    return spiral[k-1];
}

}

