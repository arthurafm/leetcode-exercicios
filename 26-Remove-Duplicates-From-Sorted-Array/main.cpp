#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int buffer = 0, retirados = 0, k = 1;
        if(nums.size() > 1){
            for(unsigned int i = 1; i < nums.size(); i++){
                if(nums[i] != nums[i-1]){
                    retirados++;
                    nums[k] = nums[i];
                    k++;
                }
            }
        }
        buffer = nums.size() - k;
        for(unsigned int i = 0; i < buffer; i++){
            nums.pop_back();
        }
        return nums.size();
    }
};

int main() {
    Solution a;
    vector<int> nums{1,1,2};
    a.removeDuplicates(nums);
    for(unsigned int i = 0; i < nums.size(); i++){
        cout << nums[i] << endl;
    }
    return 0;
}
