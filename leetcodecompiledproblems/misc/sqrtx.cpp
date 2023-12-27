#include <iostream>
using namespace std;

int main(){
    int i = 0;
    int target = 4;
    while(true){
        if(i*i > target){
            cout << i-1 << endl;
            break;
        }
        else if (i*i == target){
            cout << i << endl;
            break;
        }
        i++;
    }
    return 0;
}