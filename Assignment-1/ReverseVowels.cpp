// Technique: Forward/Backward Two-Pointer
// Time Complexity: O(1)
// Space Complexity: O(1)

#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <cmath>


string ReverseVowels(string input){
  int startPtr = 0;
  int endPtr = input.length() - 1;
  char temp;

  for (; startPtr < endPtr;){
    if((input[startPtr] == 'a' || input[startPtr] == 'e' || input[startPtr] == 'i' || input[startPtr] == 'o' || input[startPtr] == 'u' || input[startPtr] == 'A' ||input[startPtr] == 'E' || input[startPtr] == 'I' || input[startPtr] == 'O' || input[startPtr] == 'U') && (input[endPtr] == 'a' || input[endPtr] == 'e' || input[endPtr] == 'i' || input[endPtr] == 'o' || input[endPtr] == 'u' || input[endPtr] == 'A' ||input[endPtr] == 'E' || input[endPtr] == 'I' || input[endPtr] == 'O' || input[endPtr] == 'U') == true){
      temp = input[endPtr];
      input[endPtr] = input[startPtr];
      input[startPtr] = temp;
      startPtr++;
      endPtr--;
    }
    else if((input[startPtr] == 'a' || input[startPtr] == 'e' || input[startPtr] == 'i' || input[startPtr] == 'o' || input[startPtr] == 'u' || input[startPtr] == 'A' ||input[startPtr] == 'E' || input[startPtr] == 'I' || input[startPtr] == 'O' || input[startPtr] == 'U'))
        {
            endPtr--;
        }
        else
            startPtr++;
    }
  
  return input;
}


int main() {
  
string input1 = "Uber Career Prep";
cout << ReverseVowels(input1) << endl;
//Modified String: "eber Ceraer PrUp"

string input2 = "xyz";
cout << ReverseVowels(input2) << endl;
//Modified String: "xyz"

string input3 = "flamingo";
cout << ReverseVowels(input3) << endl;
//Modified String: "flominga"

return 0;
}

//Time Spent: 1 hour
