#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    string s = "MCMXCIV"; //M = 1000, CM = 900, XC = 90 and IV = 4
    for(int x = s.length()-1; x >= 0; x--){
        char character = s[x];
        switch(character){
            case 'I': 
                sum += 1; // I +1
                break;
            case 'V':
                if(s[x-1] == 'I'){ //IV +4
                    sum += 4;
                    x--;
                    continue;
                }
                sum += 5; //V +5
                break;
            case 'X':
                if(s[x-1] == 'I'){
                    sum += 9;
                    x--;
                    continue;
                }
                sum+= 10;
                break;
            case 'L':
                if(s[x-1] == 'X'){
                    sum += 40;
                    x--;
                    continue;
                }
                sum += 50;
                break;
            case 'C':
                if(s[x-1] == 'X'){
                    sum += 90;
                    x--;
                    continue;
                }
                sum += 100;
                break;
            case 'D':
                if(s[x-1] == 'C'){
                    sum += 400;
                    x--;
                    continue;
                }
                sum += 500;
                break;
            case 'M':
                if(s[x-1] == 'C'){
                    sum += 900;
                    x--;
                    continue;
                }
                sum += 1000;
                break;
        }
        
    }
    std::cout << sum;
    return 0;
}