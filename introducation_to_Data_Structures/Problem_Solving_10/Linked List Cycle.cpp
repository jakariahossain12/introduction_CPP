#include<bits/stdc++.h>
using namespace std;



//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        bool isCycle = false;
        ListNode* fast = head;
        ListNode* slow = head;

        while (fast != NULL && fast->next != NULL )
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                isCycle = true;
                break;
            }
        }
        return isCycle;

    }
};

int main(){



return 0;
}
