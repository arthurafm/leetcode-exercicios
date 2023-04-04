#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0, buffer;
        for(unsigned int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }
        buffer = nums.size() - k;
        for(unsigned int i = 0; i < buffer; i++){
            nums.pop_back();
        }
        return k;
    }
};

int main() {
    Solution a;
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    a.removeElement(nums, val);
    return 0;
}
