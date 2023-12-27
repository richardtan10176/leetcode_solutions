#include <iostream>
using namespace std;

int main(){

    string s = "()";
    for(int x = 0; x < s.length()-1;x++){
        if(s[x] == '('){
            if(s[x+1] == ')'){
                x++;
                continue;
            }
            else{
                cout << "false" << endl;
                return 0;
            }
        }
        else if (s[x] == '['){
            if(s[x+1] == ']'){
                x++;
                continue;
            }
            else{
                cout << "false" << endl;
                return 0;
            }
        }
        else if (s[x] == '{'){
            if(s[x+1] == '}'){
                x++;
                continue;
            }
            else{
                cout << "false" << endl;
                return 0;
            }
        }
    }
    cout << "true" << endl;

    return 0;
}