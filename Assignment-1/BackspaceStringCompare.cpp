// Technique: Two arrays/strings two-pointer
// Time Complexity: O(n)
// Space Complexity: O(n)

//(Please note that this solution does not work for cases with consecutive # signs.)

#include <iostream>
using namespace std;
#include <string>
#include<vector>

bool BackspaceStringCompare(string input1, string input2){
  int index = 0;
  bool result = false;
  string firstString, secondString;
  string final1, final2;
  vector<int> indexes1{};
  vector<int> indexes2{};
  
    for(int i = 0; i < input1.length(); i++){
      if (input1[i+1] == '#' || input1[i] == '#'){
     firstString.push_back(input1[i]);
  
     firstString.push_back(input1[i-1]);
    }
    else{
        indexes1.push_back(i);
     }
      }
  
    for(int k = 0; k < input2.length(); k++){
      if(input2[k+1] == '#' || input2[k] == '#')
    {
       secondString.push_back(input2[k]);
     secondString.push_back(input2[k-1]);
  }
      else{
         indexes2.push_back(k);
    }
    }   
  for(int a = 0; a < indexes1.size(); a++){
     final1.push_back(input1[indexes1[a]]);
   }
   for(int c = 0; c < indexes2.size(); c++){
     final2.push_back(input2[indexes2[c]]);
   }

  if(final1 == final2){
    result = true;
  }

  return result;
}

int main() {
string set11 = "abcde";
string set12 = "abcde";
cout << BackspaceStringCompare(set11, set12) << endl;
// Output: True
  
string set21 = "Uber Career Prep";
string set22 = "u#Uber Careee#r Prep";
cout << BackspaceStringCompare(set21, set22) << endl;
// Output: True

string set31 = "abcdef###xyz";
string set32 = "abcw#xyz";
cout << BackspaceStringCompare(set31, set32) << endl;
// Output: True

string set41 = "abcdef###xyz";
string set42 = "abcdefxyz###";
cout << BackspaceStringCompare(set41, set42) << endl;
// Output: False
  
  
    return 0;
}

// Time Spent: 2 hours 
