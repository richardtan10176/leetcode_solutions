#include<iostream>
using namespace std;

bool isCharInString(string str, char target);


int main(){
    string s = "abcabcbb";
    string temp = "";
    int counter = 0;
    int output = 0;
    for(int x = 0; x < s.length(); x++){
        if(isCharInString(temp,s[x])){
            if(x == s.length()-1){
                counter ++;
            }
            if(counter > output){
                output = counter;
            }
            temp = "";
            counter = 0;
        }
        else{
            counter++;
        }
        temp = temp + s[x];
    }
    cout << output << endl;
    return 0;
}

bool isCharInString(string str, char target){
    for(int x = 0; x < str.length();x++){
        if(str[x] == target){
            return true;        
        }
    }
    return false;
}