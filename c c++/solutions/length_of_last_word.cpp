#include <iostream>
using namespace std;

int main(){
    string s = "luffy is still joyboy";
    int indice = 0;
    for(int x = s.length()-1; x >= 0; x--){
        if(s[x] != ' '){
            indice = x;
            break;
        }
    }
    int counter = 0;
    for(int x = indice; x >= 0; x--){
        counter++;
        if(s[x-1] == ' '){
            cout << counter << endl;
            break;
        }
    }
    return 0;
}