// Technique: Sort the array, then solve
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
using namespace std;
#include <vector>

vector<int> DedupArray(vector<int> ints){
  
  int size = ints.size();
for(int i = 0; i < size-1; i++){
  if(ints[i] == ints[i+1]){
  ints.erase(ints.begin() + i);
   size--;
   i--;
}
 
}

return ints;
  
}


int main(){

vector<int> input1{1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
vector<int> result = DedupArray(input1);
  for(int i = 0; i < result.size(); i++){
    cout << result[i] << " ";
  }
//Modified Array: [1, 2, 3, 4] or [1, 2, 3, 4, -1, -1, -1, -1, -1, -1] (depending on language)
  
  cout << endl;
  
vector<int> input2{0, 0, 1, 4, 5, 5, 5, 8, 9, 9, 10, 11, 15, 15};
  vector<int> result1 = DedupArray(input2);
  for(int i = 0; i < result1.size(); i++){
    cout << result1[i] << " ";
  }
//Modified Array: [0, 1, 4, 5, 8, 9, 10, 11, 15] or [1, 4, 5, 8, 9, 10, 11, 15, -1, -1, -1, -1, -1] (depending on language)

   cout << endl;
  
vector<int> input3{1, 3, 4, 8, 10, 12};
  vector<int> result3 = DedupArray(input3);
  for(int i = 0; i < result3.size(); i++){
    cout << result3[i] << " ";
  }
//Modified Array: [1, 3, 4, 8, 10, 12]

  
  return 0;
}

// Time Spent: 1 hour
