#include <iostream>
using namespace std;

int main(){
    string s = "cbbd";
    string temp = "";
    string output = "";
    for(int x = 0; x < s.length(); x++){
        temp = s[x];
        for(int leftPointer = x-1, rightPointer = x+1; leftPointer >= 0 && rightPointer < s.length(); leftPointer--, rightPointer++){
            temp = s[leftPointer] + temp + s[rightPointer];
        }
        if(temp.length() >= output.length()){
            output = temp;
        }
        cout << temp << endl;
    }

    return 0;
}