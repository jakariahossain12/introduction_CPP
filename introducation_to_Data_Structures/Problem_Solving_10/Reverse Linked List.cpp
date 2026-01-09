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

  class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       reverseListN(head,head);
    }
};

int main(){



return 0;
}
