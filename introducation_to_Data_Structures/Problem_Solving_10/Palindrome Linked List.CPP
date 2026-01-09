#include<bits/stdc++.h>
using namespace std;
//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  void reverseListN(ListNode* &head,ListNode* temp){
    if(temp->next == NULL){
        head = temp;
        return;
    }

    reverseListN(head,temp->next);
    temp->next->next = temp;
    temp->next = NULL;
  }

  void insertTail(ListNode* &head,ListNode* &tail,int v){
    ListNode* newNode = new ListNode(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;

  }

 class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL){
            return true;
        }
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;

        ListNode* temp = head;

        while (temp != NULL)
        {
            insertTail(newHead,newTail,temp->val);
            temp = temp->next;
        }
        
        reverseListN(newHead,newHead);

        while (temp != NULL)
        {
            if(temp->val != newHead->val){
                return false;
            }

            temp = temp->next;
            
        }
        
        return true;

    }
};

int main(){



return 0;
}
