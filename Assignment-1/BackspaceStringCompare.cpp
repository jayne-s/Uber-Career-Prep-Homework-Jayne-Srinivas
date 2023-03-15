// Technique: Two arrays/strings two-pointer
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
using namespace std;
#include <string>
#include<vector>

bool BackspaceStringCompare(string input1, string input2){
  int index = 0;
  int index1 = 0;
  bool result = false;
  string final1, final2;

  for (int i = 0; i < input1.length(); i++) {
        if (input1[i] != '#') {
            input1[index] = input1[i];
            index++;
        }
        else if (input1[i] == '#' && index > -1) {
            index--;
        }
    }

  final1 = input1.substr(0,index);
  
  for (int j = 0; j < input2.length(); j++) {
        if (input2[j] != '#') {
            input2[index1] = input2[j];
            index1++;
        }
        else if (input2[j] == '#' && index1 > -1) {
            index1--;
        }
    }
  final2 = input2.substr(0,index1);
  

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

// Time Spent: 2.5 hours 
