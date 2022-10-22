#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(unsigned int i = 0; i < nums.size(); i++){
            if(nums[i] >= target){
                return i;
            }
        }
        return nums.size();
    }
};

int main() {
    Solution a;
    vector<int> nums = {1,3,5,6};
    int target = 7;
    a.searchInsert(nums, target);
    return 0;
}
