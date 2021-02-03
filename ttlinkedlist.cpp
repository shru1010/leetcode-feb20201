class Solution {
public:    unordered_set<ListNode*> A;    
    bool hasCycle(ListNode *head) {
      if(!head) return false;
        if(A.count(head)) return true;
        else{
            A.insert(head);
            return hasCycle(head->next);
        }   
    }
};
