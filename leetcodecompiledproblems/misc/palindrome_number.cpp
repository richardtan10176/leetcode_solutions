#include <iostream>
#include <string> 


using namespace std;

int main(){
    int x;
    cout << "Enter a number to see if its a palindrome: ";
    cin >> x;
    
    string s = to_string(x);
    for(int x = 0, y = s.length()-1; y > x; y--,x++){
        if(s[x] != s[y]){
            cout << "not a palindrome" << endl;
            return 0;
        }
    }
    cout << "it is a palindrome" << endl;

    return 0;
}
