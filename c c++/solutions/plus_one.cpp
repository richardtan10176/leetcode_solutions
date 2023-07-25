#include <iostream>
#include <string> 
using namespace std;
int main(){
    int digits[] = {9,9,9,9};
    string s = "";
    for(int x = 0; x < sizeof(digits) / sizeof(int); x++){
        s = s + to_string(digits[x]);
    }
    int combinedDigits = stoi(s);
    combinedDigits ++;
    s = to_string(combinedDigits);
    for(int x = 0; x < s.length(); x++){
        cout << s[x];
    }
    return 0;
}