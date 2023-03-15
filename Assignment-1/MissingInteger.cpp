// Technique: Fixed-size sliding window
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;
#include <vector>

int MissingInteger(vector<int> ints, int n){
  int missing = 0;
  int actualSum = (n*(n+1))/2;
  int sumOfElements = 0;
  for(int i = 0; i < ints.size(); i++){
    sumOfElements+=ints[i];
  }
missing = actualSum - sumOfElements;

  return missing;
}


int main() {
  
vector<int> input1{1, 2, 3, 4, 6, 7};
int n1 = 7;
cout << MissingInteger(input1, n1) << endl;
// Output: 5

vector<int> input2{1};
int n2 = 2;
cout << MissingInteger(input2, n2) << endl;
//Output: 2
  
vector<int> input3{1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12};
int n3 = 12;
cout << MissingInteger(input3, n3) << endl;
//Output: 9

  return 0;
}

// Time Spent: 20 mins
