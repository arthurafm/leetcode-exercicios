#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n){
        int cont1 = 0, cont2 = 0;
        for(unsigned int i = m; i < nums1.size(); i++){
            nums1[i] = nums2[cont2];
            cont2++;
        }
        int i, j, temp;
        for(j = 1; j < nums1.size(); j++){
            temp = nums1[j];
            for(i = (j-1); (i >= 0) && (nums1[i] > temp); i--){
                nums1[i+1] = nums1[i];
            }
            nums1[i+1] = temp;
        }
    }
};

int main(){
    Solution a;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}, nums2 = {2, 5, 6};
    int m = 3, n = 3;
    a.merge(nums1, m, nums2, n);
    for(unsigned int i = 0; i < nums1.size(); i++){
        cout << nums1[i] << "\t";
    }
    return 0;
}
