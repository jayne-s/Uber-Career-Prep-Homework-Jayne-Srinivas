// Technique: Variable-size (shrinking/growing) sliding window
// Time Complexity: O(n^2)
// Space Complexity: O(n)


#include <iostream>
using namespace std;
#include <vector>


int ZeroSumSubArrays(vector<int> nums){
    int tempSum = 0;
    int start = 0;
    int count = 0;
    for(int i  = 0; i < nums.size(); i++){
      start = i+1;
    for(; start < nums.size();){
        tempSum+=(nums[start]);
         if(tempSum == 0){
             count++;
             tempSum = 0;
         }
      else if(nums[start] == 0){
        count++;
        tempSum = 0;
      }
         start++;
    }
      
    }
    return count++;
}


int main() {


    vector<int> nums1{4, 5, 2, -1, -3, -3, 4, 6, -7};
    cout << ZeroSumSubArrays(nums1) << endl;
    //Output: 2
    //(Subarrays: [5, 2, -1, -3, -3], [-3, 4, 6, -7])
    
    vector<int> nums2{1, 8, 7, 3, 11, 9};
    cout << ZeroSumSubArrays(nums2) << endl;
    //Output: 0

    vector<int> nums3{8, -5, 0, -2, 3, -4};
    cout << ZeroSumSubArrays(nums3) << endl;
    //Output: 2
    //(Subarrays: [0], [8, -5, 0, -2, 3, -4])
  
    return 0;
}

// Time Spent: 1.5 hours
