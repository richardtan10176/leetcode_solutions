#include <iostream>
using namespace std;

int main(){
    string haystack = "sadbutsad";
    string needle = "sad";
    bool found = false;

    for(int x = 0; x < haystack.length(); x++){
        if(haystack[x] == needle[0]){
            for(int y = 0; y < needle.length(); y++){
                if(x+y >= haystack.length()){
                    cout << -1 << endl;
                    return 0;
                }
                else if(!(haystack[x+y] == needle[y])){
                    break;
                }
                if(y == needle.length()-1 && haystack[x+y] == needle[y]){
                    found = true;
                }
            }
        }
        if(found == true){
            cout << x << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}