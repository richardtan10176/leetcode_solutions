#include <iostream>
using namespace std;
int main(){
    string strs[] = {"dog","racecar","car"};
    int indice = 0;
    string output = "";
    bool isDonelooping = false;
    while(!isDonelooping){
        char temp = strs[0][indice];
        for(int x = 1; x < sizeof(strs)/sizeof(strs[0]);x++){
            if(!(strs[x][indice] == temp)){
                isDonelooping = true;
                break;
            }
        }
        if(!isDonelooping){
            output += temp;
            indice++;
        }
        
    }
    cout << output << endl;
    return 0;    
}