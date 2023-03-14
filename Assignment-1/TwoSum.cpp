
// Technique: Fixed-size sliding window
// Time Complexity: O(n^2) 
// Space Complexity: O(n)

#include <iostream>
using namespace std;
#include <vector>


int TwoSum(vector<int> ints, int k){
  
int begin = 0;
int end = 0;
int count = 0;
int tempSum = 0;
  
for(begin = 0; begin < ints.size(); begin++){
  
  for(end = begin+1; end < ints.size(); end++){
    
    tempSum = (ints[end] + ints[begin]);
    
    if(tempSum == k){
      count++;
      }
    
    }
   
  }
  
   return count;
}

int main() {
  
vector<int> nums1{1, 10, 8, 3, 2, 5, 7, 2, -2, -1};
int k1 = 10;
cout << TwoSum(nums1, k1) << endl;
//Output: 3
//(Pairs: (8, 2), (8, 2), (3, 7))

 
vector<int> nums2{1, 10, 8, 3, 2, 5, 7, 2, -2, -1};
int k2 = 8;
cout << TwoSum(nums2, k2) << endl;
// Output: 3
// (Pairs: (10, -2), (3, 5), (1, 7))
  
vector<int> nums3{4, 3, 3, 5, 7, 0, 2, 3, 8, 6};
int k3 = 6;
cout << TwoSum(nums3, k3) << endl;
//Output: 5
//(Pairs: (4, 2), (0, 6), (3, 3), (3, 3), (3, 3))


  return 0;
}

//Time Spent: 30 mins
