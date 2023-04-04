#include <iostream>

using namespace std;

struct ListNode{
    int val;
    ListNode *next;
};

class Solution{
public:
    ListNode *deleteDuplicates(ListNode *head){
        ListNode *output = head;
        for(ListNode *cursor = head; cursor != nullptr;){
            if((cursor->next) == nullptr){
                break;
            }
            else{
                if((cursor->next)->val == cursor->val){
                    cursor->next = (cursor->next)->next;
                }
                else{
                    cursor = cursor->next;
                }
            }
        }
        return output;
    }
};

int main(){
    Solution a;
    ListNode *list1 = nullptr, *list2 = nullptr;
    ListNode *buffer1 = new ListNode, *buffer2 = new ListNode, *buffer3 = new ListNode;
    buffer1->val = 1;
    buffer1->next = buffer2;
    buffer2->val = 1;
    buffer2->next = buffer3;
    buffer3->val = 2;
    buffer3->next = nullptr;
    ListNode *buffer4 = new ListNode, *buffer5 = new ListNode, *buffer6 = new ListNode, *buffer7 = new ListNode, *buffer8 = new ListNode;
    buffer4->val = 1;
    buffer4->next = buffer5;
    buffer5->val = 1;
    buffer5->next = buffer6;
    buffer6->val = 2;
    buffer6->next = buffer7;
    buffer7->val = 3;
    buffer7->next = buffer8;
    buffer8->val = 3;
    buffer8->next = nullptr;
    list1 = buffer1;
    list2 = buffer4;
    for(ListNode *resp = a.deleteDuplicates(list2); resp != nullptr; resp = resp->next){
        cout << resp->val << "\t";
    }
    return 0;
}
