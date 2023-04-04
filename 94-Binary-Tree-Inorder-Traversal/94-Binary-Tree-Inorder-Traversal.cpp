#include <iostream>
#include <vector>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution{
public:
    void recursaoTraversal(TreeNode *root, vector<int> &vector){
        if(root == nullptr){
            return;
        }
        recursaoTraversal(root->left, vector);
        vector.push_back(root->val);
        recursaoTraversal(root->right, vector);
    }
    vector<int> inorderTraversal(TreeNode *root){
        vector<int> vetor;
        recursaoTraversal(root, vetor);
        return vetor;
    }
};

int main(){
    Solution a;
    auto *t1 = new TreeNode, *t2 = new TreeNode, *t3 = new TreeNode;
    t1->val = 1;
    t1->left = nullptr;
    t1->right = t2;
    t2->val = 2;
    t2->left = t3;
    t2->right = nullptr;
    t3->val = 3;
    t3->left = nullptr;
    t3->right = nullptr;
    vector<int> b = a.inorderTraversal(t1);
    for(unsigned int i = 0; i < b.size(); i++){
        cout << b[i] << "\t";
    }
    return 0;
}
