#include<bits/stdc++.h>
using namespace std;


  struct ListNode {
     int val;
     struct ListNode *next;
  };
 

  int countList(ListNode* head){

    ListNode* temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count ++;
        temp = temp->next;
    }
    
    return count;

 }


struct ListNode* middleNode(struct ListNode* head) {

    int len = countList(head);
    
    ListNode* temp = head;
    for (int i = 1; i <= len/2; i++)
    {
        temp = temp->next;
    }
    
    return temp;
    
}



int main(){



return 0;
}
