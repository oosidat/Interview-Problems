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

int ConvertStringToInt(string numberString) {
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

void ProduceDifferenceOutput(int caseCount, string inputString) {
    
    int distanceToPalindrome = 0;
    
    // Removing Zeroes, keeping a string version and an int version for calculations
    int inputStringInt = ConvertStringToInt(inputString);
    string zeroStrippedString = ConvertIntToString(inputStringInt);
    string closestNextPalindrome;

    if (IsPalindrome(zeroStrippedString)) {
        closestNextPalindrome = inputString;
    }
    else {
        int nextPalindrome = NextPalindromeNumber(inputStringInt);
        distanceToPalindrome = nextPalindrome - inputStringInt;
        closestNextPalindrome = ConvertIntToString(nextPalindrome);
    }
    cout << "Case " << caseCount << ": " << distanceToPalindrome << " miles to " << closestNextPalindrome << "." << endl;
}


int main() {
    string inputString;
    int caseCount = 1;
    while (cin >> inputString) {
        if (inputString == "-1") {
            return 0;
        }
        else {
            ProduceDifferenceOutput(caseCount, inputString);
            caseCount++;
        }
    }
}
