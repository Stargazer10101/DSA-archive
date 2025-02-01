// Question Link:
// https://www.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/0




//User function Template for javascript
/**
 * @param {number[]} a
 * @param {number} n
 * @param {number} k
 * @returns {number}
*/

class Solution {
    //Function to count number of subarrays with product less than k.
    countSubArrayProductLessThanK(a, n, k) {
        let length= a.length;
        let left=0;
        let count =0;
        let product=1;
        
        for(let right=0; right< length; right++){
            product *= a[right];
            while(product>=k && left<=right){
                
                product /= a[left];
                left++;
            }
            count+= (right-left+1);
        }
        
        return count;
    }
}