#include <iostream>
using namespace std;

//solution is o(n^2) time complexity, may use hashmap to have linear time complexity

int main(){
    int nums[] = {2,7,11,15};
    int target = 9;
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
            if(x != y){
                if(nums[y] + nums[x] == target){
                    cout << x << " " << y << endl;
                }
                return 0;
            }
        }
    }
}