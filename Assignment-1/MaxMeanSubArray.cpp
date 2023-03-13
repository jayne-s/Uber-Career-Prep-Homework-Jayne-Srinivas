// Technique: Fixed-size sliding window
// Time Complexity: O(n^2) 
// Space Complexity: O(n)

#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>

double MaxMeanSubArray(vector<int> ints, int k){
  
int begin = 0;
int end = begin + k;
vector<int> sumArray(100);
int sum = 0;
for(int i = 0; i < (ints.size() / k); i++){
  for(; begin < end; begin++){
    sum+=ints[begin];
  }
  sumArray.push_back(sum);
  end+=k;
  sum = 0;
}

double largestSum = *max_element(sumArray.begin(), sumArray.end());
return (largestSum/k);
  
}

int main() {
  
vector<int> nums {4, 5, -3, 2, 6, 1};
int k = 2;
cout << "Output: " << MaxMeanSubArray(nums,k) << endl;
//Output: 4.5

vector<int> nums1 {4, 5, -3, 2, 6, 1};
int k1 = 3;
cout << "Output: " << MaxMeanSubArray(nums1,k1) << endl;
//Output: 3

vector<int> nums2 {1, 1, 1, 1, -1, -1, 2, -1, -1};
int k2 = 3;
cout << "Output: " << MaxMeanSubArray(nums2,k2) << endl;
//Output: 1

vector<int> nums3{1, 1, 1, 1, -1, -1, 2, -1, -1, 6};
int k3 = 5;
cout << "Output: " << MaxMeanSubArray(nums3,k3) << endl;
//Output: 1

return 0;
}

//Time Spent: 20 mins
