/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 /*
  * Wrong Solution
  * 思路：遍历两链表，求数字之和，再顺序尾插简历output链表。
  * input: [5] [5]; excepted: [1,0]; output: [10]
  * 该方法无法用于判断数字求和后进位的情况。  
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int val1 = 0, val2 = 0;
        int degree = 1;
        while(l1 != NULL && l2 != NULL){
            val1 = l1->val * degree +val1;
            val2 = l2->val * degree +val2;
            degree *= 10;
            l1 = l1->next;
            l2 = l2->next;
        }
        int sum = val1 + val2;
        ListNode *l =NULL;
        degree /= 10;
        while(degree != 0){
            ListNode *Node = new ListNode(sum / degree);
            Node->next = l;
            l = Node;
            sum = sum - (sum / degree) * degree;
            degree /= 10;
        }
        return l;
    }
};
*/
