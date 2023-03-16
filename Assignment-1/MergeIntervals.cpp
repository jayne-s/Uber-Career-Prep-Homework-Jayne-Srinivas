// Technique: Sort the array, then solve
// Time Complexity: O(nlogn)
// Space Complexity: O(n)

// Note: This solution gives a 'signal: segmentation fault (core dumped)' error.

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cmath>

vector<vector<int>> MergeIntervals(vector<vector<int>> nums){

vector<vector<int>> finalVector;
sort(nums.begin(), nums.end());

  for(auto i: nums){
  if(i[0] < finalVector.back()[1]){
    finalVector.push_back(i);
  }
  else if(i[0] > finalVector.back()[1]){
    finalVector.back()[0] = min(finalVector.back()[0], i[0]);
    finalVector.back()[1] = max(finalVector.back()[1], i[1]);
  }
  else if(finalVector.empty() == true)
{
    finalVector.push_back(i);
  }
}
return finalVector;
  
}

int main(){
  
vector<vector<int>> input1{{2, 3}, {4, 8}, {1, 2}, {5, 7}, {9, 12}};
vector<vector<int>> result1 = MergeIntervals(input1);
  for (auto &row : result1)
    {
        for (auto &column : row)
        {
            cout << column << " ";
        }
        cout << endl;
    }
  
// Output: [(4, 8), (1, 3), (9, 12)]

vector<vector<int>> input2{{5, 8}, {6, 10}, {2, 4}, {3, 6}};
vector<vector<int>> result2 = MergeIntervals(input2);
  for (auto &row : result2)
    {
        for (auto &column : row)
        {
            cout << column << " ";
        }
        cout << endl;
    }

  // Output: [(2, 10)]

vector<vector<int>> input3{{10, 12}, {5, 6}, {7, 9}, {1, 3}};
vector<vector<int>> result3 = MergeIntervals(input3);
  for (auto &row : result3)
    {
        for (auto &column : row)
        {
            cout << column << " ";
        }
        cout << endl;
    }
//Output: [(10, 12), (5, 6), (7, 9), (1, 3)]
  
  return 0;
}

// Time Spent: 3 hours
