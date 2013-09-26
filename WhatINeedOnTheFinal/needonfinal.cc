#include <iostream>
#include <string>

using namespace std;

void InputsToArray(int *inputValuesArray, int k) {
    int inputValue;
    for (int i = 0; i < k; i++) {
        cin >> inputValue;
        inputValuesArray[i] = inputValue;
    }
}

int SumOfWeightedValues (int * arrayA, int * arrayB, int count) {
    int sumWeights = 0;
    for (int i = 0; i < count; i++) {
        sumWeights = sumWeights + ( arrayA[i] * arrayB[i] );
    }
    return sumWeights;
}

int RequiredForFinal(int desiredAverage, int weightedSumOfOtherTests, int examWeight) {
    return ( float (100 * desiredAverage) - weightedSumOfOtherTests) / float(examWeight);
}

// code from cplusplus.com
void printarray (int arg[], int length) {
    for (int n = 0; n < length; n++) {
        cout << arg[n] << " ";
    }
    cout << endl;
}

float CalculateCase(int desiredAverage) {
    float requiredInFinal;
    int numberOfTests;
    int numberOfScores; // tests - 1
    cin >> numberOfTests;
    numberOfScores = numberOfTests - 1;

    int testWeights [numberOfTests];
    int testScores [numberOfScores];
    InputsToArray(testWeights, numberOfTests);
    InputsToArray(testScores, numberOfScores);
    int examWeight = testWeights[numberOfScores];

    int weightedSumOfOtherTests = SumOfWeightedValues(testWeights, testScores, numberOfScores);
    requiredInFinal = RequiredForFinal(desiredAverage, weightedSumOfOtherTests , examWeight);

    return requiredInFinal;
}

int main() {
    int desiredAverage;
    int caseCount = 1;
    while (cin >> desiredAverage) {
        if (desiredAverage == -1) {
            return 0;
        } else {
            float requiredInFinal = CalculateCase(desiredAverage);
            cout << "Case " << caseCount << ": ";
            if (requiredInFinal <= 100) {
                cout << requiredInFinal;
            }
            else {cout << "impossible";}
            cout << endl;
        }
        caseCount++;
    }
}




    
