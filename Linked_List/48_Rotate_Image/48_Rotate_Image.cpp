#include <iostream>
#include <list>
using namespace std;
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || !head || !head->next)return head;            //edge case for no nodes, no ra=otation
        int n=1;                                                //count for number of nodes
        ListNode* tail=head;                                    //pointer to first element 
        while(tail->next!=NULL){            
            tail=tail->next;                                    //to reach last element
            n++;                                                //increase count of numebr of nodes
        }
        k=k%n;                                                  //Normalization of number of rotation
        if(k==0)return head;                                    //if k==0 no rotation=same linked list
        tail->next=head;    
        int remaining_nodes=n-k;                       //remaining nodes that no need to be rotated for 1 ex 5-2=3 first 3 nodes
        ListNode* NewTail=head;                         //declare new tail at head
        for(int i=1;i<remaining_nodes;i++){             
            NewTail=NewTail->next;                      // reach till 3 Nodein first ex case
        }
        ListNode* NewHead=NewTail->next;                //declare new head which will point to next element i.e3->4 4th one
        NewTail->next=NULL;                             // then point tail to last element making it last element in linked list
        return NewHead;                                    // return new head
    }
};