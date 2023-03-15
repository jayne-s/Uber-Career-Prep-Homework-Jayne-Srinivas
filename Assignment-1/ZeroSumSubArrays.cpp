// Technique: Reset/catch-up two-pointer
// Time Complexity: O(n^2)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
using namespace std;

int ZeroSumSubArrays(vector<int> ints) {
     int count = 0;
  for (int startPtr = 0; startPtr < ints.size(); startPtr++) {
          int sum = 0;
for (int endPtr = startPtr; endPtr < ints.size(); endPtr++) {
          sum += ints[endPtr];
          if (sum == 0){
            count++;
          }
            
      }
        
  }
  return count;
} 

int main() {
    
  vector<int> nums1 {4, 5, 2, -1, -3, -3, 4, 6, -7}; 
    cout << ZeroSumSubArrays(nums1) << endl;
  // Output: 2
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

// Time Spent: 1.5 hour
