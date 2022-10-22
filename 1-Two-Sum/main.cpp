#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        bool found = false;
        vector<int> results;
        for(unsigned int i = 0; i < nums.size(); i++){
            for(unsigned int j = 0; j < nums.size(); j++){
                if(i != j) {
                    if((nums[i] + nums[j]) == target){
                        found = true;
                        results.push_back(i);
                        results.push_back(j);
                        break;
                    }
                }
            }
            if(found == true){
                break;
            }
        }
        return results;
    }
};

int main() {
    Solution a;
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(3);
    int target = 6;
    nums = a.twoSum(nums, target);
    cout << "[" << nums[0] << "," << nums[1] << "]";
    return 0;
}
