#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int RemoveLeadingZeroes(string numberString) {
    int numberInt;
    stringstream (numberString) >> numberInt;
    return numberInt;
}

string ReversedString(string str) {
    return string(str.rbegin(), str.rend());
}

bool IsPalindrome(string testString){
   return (testString == ReversedString(testString)); 
}

int NextPalindromeNumber(int originalNumber) {
    int tempInt = originalNumber + 1;
    string convertedToString = string(originalNumber);
    while (!IsPalindrome(convertedToString)) {
        tempInt++;
        convertedToString = string(tempInt);
    }
    return tempInt;
}

int main() {
    int inputstring;
    cin >> inputstring;
    cout << NextPalindromeNumber(inputstring) << endl;
    return 0;
}


