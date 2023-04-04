#include <iostream>

 using namespace std;

 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *a = nullptr, *buffer;
        bool firstRun = true;
        while((list1 != nullptr) || (list2 != nullptr)){
            ListNode* novo = new ListNode;
            if(firstRun == true){
                if((list1 != nullptr) && (list2 != nullptr)){
                    if((list1->val <= list2->val) || (list1 == nullptr)){
                        novo->val = list1->val;
                        list1 = list1->next;
                    }
                    else{
                        novo->val = list2->val;
                        list2 = list2->next;
                    }
                }
                else{
                    if(list1 == nullptr){
                        novo->val = list2->val;
                        list2 = list2->next;
                    }
                    else{
                        novo->val = list1->val;
                        list1 = list1->next;
                    }
                }
                novo->next = nullptr;
                buffer = novo;
                a = buffer;
                firstRun = false;
            }
            else{
                if((list1 != nullptr) && (list2 != nullptr)){
                    if((list1->val <= list2->val) || (list1 == nullptr)){
                        novo->val = list1->val;
                        list1 = list1->next;
                    }
                    else{
                        novo->val = list2->val;
                        list2 = list2->next;
                    }
                }
                else{
                    if(list1 == nullptr){
                        novo->val = list2->val;
                        list2 = list2->next;
                    }
                    else{
                        novo->val = list1->val;
                        list1 = list1->next;
                    }
                }
                novo->next = nullptr;
                buffer->next = novo;
                buffer = novo;
            }
        }
        return a;
    }
};

int main() {
    Solution a;
    ListNode *list1 = nullptr, *list2 = nullptr;
    /*
    ListNode *buffer1 = new ListNode, *buffer2 = new ListNode, *buffer3 = new ListNode;
    buffer1->val = 1;
    buffer1->next = buffer2;
    buffer2->val = 2;
    buffer2->next = buffer3;
    buffer3->val = 4;
    buffer3->next = nullptr;
    ListNode *buffer4 = new ListNode, *buffer5 = new ListNode, *buffer6 = new ListNode;
    buffer4->val = 1;
    buffer4->next = buffer5;
    buffer5->val = 3;
    buffer5->next = buffer6;
    buffer6->val = 4;
    buffer6->next = nullptr;
    list1 = buffer1;
    list2 = buffer4;
     */
    ListNode *b = a.mergeTwoLists(list1, list2);
    return 0;
}
