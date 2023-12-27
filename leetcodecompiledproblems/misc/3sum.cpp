using namespace std;
#include <iostream>

int main(){
    int nums[] = {-1,0,1,2,-1,-4};
    int output[100][3];
    int inputSize = sizeof(nums)/sizeof(int);
    int counter = 0; 
    for(int x = 0,y = 1,z = 2 ; z < inputSize; x++,y++,z++){
        if(nums[x] + nums[y] + nums[z] == 0){
            output[counter][0] = nums[x];
            output[counter][1] = nums[y];
            output[counter][2] = nums[z];
            counter++;
        }
    }
    for(int x = 0; x < 100; x++){
        cout << output[x][0] << ", " << output[x][1] << ", " << output[x][2] << endl; 
    }
    return 0;
}