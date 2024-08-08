#include<bits/stdc++.h>
using namespace std;

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
        if(l1 == NULL){
            return l2;
        }
        if(l2 == NULL){
            return l1;
        }
        
        ListNode * ans;
        
        if(l1->val <= l2->val){
            ans = l1;
            l1 = l1->next;
        }
        else{
            ans  = l2;
            l2 = l2->next;
        }
        
        ListNode *helper = ans;
        
 while(l1 != NULL && l2 != NULL){
            ListNode *temp;
       
           if(l1->val <= l2->val){
            temp = l1;
            l1 = l1->next;
            }
            else{
            temp  = l2;
            l2 = l2->next;
            }
          
         helper->next = temp;
         helper = temp;
        }
        
        if(l1 != NULL){
            helper->next = l1;
        }
        else{
            helper->next = l2;
        }
        
        return ans;
        
    }

int main(){

}