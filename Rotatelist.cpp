/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
 ListNode *rotateRight(ListNode* head,int k)
 {
     if(head == NULL)
        return NULL;
	 ListNode * curNode = head;
	 while (curNode->next != NULL)
	 {
		 curNode = curNode->next;
	 }
	 //  cout<<"k "<<k<<"len"<<k%listLen(head)<<endl;
	 k = listLen(head)- k%listLen(head);
	 curNode->next = head;
	 curNode = head;
	 // cout<<"k "<<k<<endl;
	 for(int i = 0; i < k-1; i++){
		curNode = curNode->next;
		//cout<<curNode->val;
	 }
	 ListNode * newhead = curNode->next;
	 curNode->next = NULL;
	 return newhead;
 }
 
 int listLen(ListNode* head){
     int count = 0;
     while(head != NULL){
         count++;
         head = head->next;
     }
     return count;
 }
};