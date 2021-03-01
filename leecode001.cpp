//
// Created by mas on 2021/3/1.
//

#include <iostream>
#include <vector>

using namespace std;

/**
 * https://leetcode-cn.com/problems/two-sum/
 * @return
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i+1; j < nums.size(); ++j) {
                if(nums[i] + nums[j] == target){
                    v = {i,j};
                    return v;
                }
            }
        }
        return v;
    }
};

int main(){
    cout << "Hello LeeCode start" << endl;

    // ************** test *****************
    // case 1
//    vector<int> nums {2,7,11,15};
//    int target = 9;

//    // case 2
//    vector<int> nums {3,2,4};
//    int target = 6;

    // case 3
    vector<int> nums {3,3};
    int target = 6;

    // ************** test *****************

    Solution s;
    auto v = s.twoSum(nums,target);

    for(auto &item : v){
        cout << item << endl;
    }


    cout << "Hello LeeCode end" << endl;
}
