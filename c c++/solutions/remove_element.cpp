#include <iostream>
using namespace std;

int main() {
    int input[] = {0,1,2,2,3,0,4,2};
    int val = 2;
    

    int inputSize = sizeof(input) / sizeof(input[0]);
    int output[inputSize];
    
    int counter = 0;
    for (int x = 0; x < inputSize; x++) {
        if (input[x] != val) {
            output[counter] = input[x];
            counter++;
        }
    }
    
    for (int x = 0; x < counter; x++) {
        cout << output[x];
    }
    
    return 0;
}