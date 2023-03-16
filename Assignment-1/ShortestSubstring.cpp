// Technique: Fixed-size sliding window
// Time Complexity: O(n^2)
// Space Complexity: O(n)

// Note: This solution does not work. 

#include <iostream>
using namespace std;
#include <unordered_map>
#include <string>

int ShortestSubstring(string a, string b){
  
  int beginPtr = 0;
  int length = a.length();
  int count = b.length();
  
  int endPtr = 0;
  unordered_map<char, int> map;

  for(auto ch: b){
    map[ch]++;
  }
  
  while(endPtr < a.length()){
    if(map[a[endPtr]] > 0){
      count--;
    }
    else{
      endPtr++;
    }
   
    while(count == 0){
      if((endPtr - beginPtr) < length){
        length = endPtr - beginPtr;
      }
      else{
        beginPtr++;
      }
    }
    }
    string substr = a.substr(beginPtr, length);
  return substr.length();
  }


int main(){

string set1_1 = "abracadabra";
string set1_2 = "abc";
cout << ShortestSubstring(set1_1, set1_2) << endl;
// Output: 4 (Shortest Substring: "brac")

string set2_1 = "zxycbaabcdwxyzzxwdcbxyzabccbazyx";
string set2_2 = "zzyzx";
cout << ShortestSubstring(set2_1, set2_2) << endl;
// Output: 10 (Shortest Substring: "zzxwdcbxyz")

string set3_1 = "dog";
string set3_2 = "god";
cout << ShortestSubstring(set3_1, set3_2) << endl;
// Output: 3 (Shortest Substring: "dog")

  return 0;
}

// Time Spent: 3 hours
