// Technique: Hash the elements
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
using namespace std;
#include <string>

bool KAnagrams(string s1, string s2, int k){
  
  int count = 0;
  bool result = false;
  int arr1[26] = {0};
  int arr2[26] = {0};
  
  for (int i = 0; i < s2.length(); i++){
     arr1[s1[i]-'a']++;
     arr2[s2[i]-'a']++;
  }

  for (int j = 0; j < 26; j++){
    if(arr2[j] < arr1[j]){
      count += ((arr1[j]) - (arr2[j]));
    }
  }

  if(s1.length() != s2.length()){
    result = false;
  }
  else if(count <= k){
    result = true;
  }
 
return result;
  
}

int main(){

  string set_1 = "apple";
  string set_11 = "peach";
  int k1 = 1;
  cout << KAnagrams(set_1,set_11, k1) << endl;
  //Output: False

  string set_2 = "apple";
  string set_21 = "peach";
  int k2 = 2;
  cout << KAnagrams(set_2,set_21, k2) << endl;
  // Output: True

  string set_3 = "cat";
  string set_31 = "dog";
  int k3 = 3;
  cout << KAnagrams(set_3,set_31, k3) << endl;
  // Output: True

  string set_4 = "debit curd";
  string set_41 = "bad credit";
  int k4 = 1;
  cout << KAnagrams(set_4,set_41, k4) << endl;
  // Output: True

  string set_5 = "baseball";
  string set_51 = "basketball";
  int k5 = 2;
  cout << KAnagrams(set_5,set_51, k5) << endl;
  // Output: False

  
  return 0;
}

// Time Spent: 1.5 hours
