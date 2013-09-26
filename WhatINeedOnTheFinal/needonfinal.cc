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

int CalculateRequiredForFinal(int desiredAverage, int weightedSumOfOtherTests, int examWeight) {
    return ( (100 * desiredAverage) - weightedSumOfOtherTests) / examWeight;
}

// code from cplusplus.com
void printarray (int arg[], int length) {
    for (int n = 0; n < length; n++) {
        cout << arg[n] << " ";
    }
    cout << endl;
}

int main() {
    int requiredInFinal;
    int desiredAverage;
    int numberOfTests;
    int numberOfScores; // tests - 1
    cin >> desiredAverage;
    cin >> numberOfTests;
    numberOfScores = numberOfTests - 1;

    int testWeights [numberOfTests];
    int testScores [numberOfScores];
    InputsToArray(testWeights, numberOfTests);
    InputsToArray(testScores, numberOfScores);
    int examWeight = testWeights[numberOfScores];

    int weightedSumOfOtherTests = SumOfWeightedValues(testWeights, testScores, numberOfScores);
    requiredInFinal = CalculateRequiredForFinal(desiredAverage, weightedSumOfOtherTests , examWeight);

    cout << requiredInFinal << endl;    
    return 0;
}
