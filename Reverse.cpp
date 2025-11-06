class Solution {
    ListNode* reverse(ListNode* head,int count,int k){
        if(count==k || head==nullptr) return head;
        ListNode* newhead=reverse(head->next,count+1,k);
       if(newhead){ ListNode* front=head->next;
        head->next=front->next;
        front->next=head;}
        return newhead;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
    int b=0;
    ListNode* temp=head;
    ListNode* newhead;
    ListNode* prev;
    while(temp!=nullptr){
            if(b==0){
              head=reverse(temp,1,k);
              b=1;
            }
            else {
             newhead=reverse(temp,1,k);
            if(newhead!=nullptr) prev->next=newhead;
            else break;
            }
        prev=temp;
        temp=temp->next;
    }
    return head;
    }
};
