#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int MAX_STRING_LENGTH = 6;

string ConvertIntToString(int numberToConvert) {
    stringstream ss;
    ss << numberToConvert;
    string result = ss.str();
    return result;
}

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
    string convertedToString = ConvertIntToString(tempInt);
    
    while (!IsPalindrome(convertedToString)) {
        tempInt++;
        convertedToString = ConvertIntToString(tempInt);
    } 
    return tempInt;
}


string ZeroPaddedString(string unPaddedString) {
    string result = unPaddedString;
    string zeroString = "0";
    while (result.length() != MAX_STRING_LENGTH) {
        result.insert(0, zeroString);
    }
    return result;
}


int main() {
    int inputstring;
    cin >> inputstring;
    cout << ZeroPaddedString(ConvertIntToString (NextPalindromeNumber(inputstring))) << endl;
    return 0;
}
