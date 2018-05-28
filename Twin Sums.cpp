#include <vector>
#include <iostream>
 using namespace std;



vector<int> twoSum(vector<int>& nums, int target) {

    //Remove entries larger then target
    //Split array in two


    int size_of_nums = nums.size();

    //Find the number of elements <= target
    int nums_less_target = 0;
    for(int i = 0; i < size_of_nums; i++){
        if(nums[i] <= target){
            nums_less_target++;
        }
    }

    //Build vector array to hold number of elements <= target
    vector<int> LTarget;
    LTarget.reserve(nums_less_target);

    //Add those elements to new array
    int p = 0;
    for(int i = 0; i < size_of_nums; i++){
        if(nums[i] <= target){
            LTarget[p] = nums[i];
            p++;
        }
    }

    //create bucket for bucket sort
    vector<int> bucket(nums_less_target);

    int index = 0;
    for(int i = 0; i < nums_less_target; i++){
        index = LTarget[i];
        if(bucket[index] == 0){
            bucket[index] = 1;
        }
    }

    //Search for two numbers that add to target by selectively choosing
    //comparisons

    vector<int> solution;
    solution.reserve(2);

    int diff = 0;
    for(int i = 0; i < bucket.size(); i++){
        diff = target - i;
        if(bucket[i] != 0 && bucket[diff]){
            solution[0]=bucket[i];
            solution[1]=bucket[diff];
            break;
        }
    }

    return solution;
}

int main(){
    int targer = 0;
    vector
    cout << "Enter target number\n"
    cin >> target;;

    vector<int> = twosums(vec,target);
    cout<<
    return 0;
}

