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
  * ˼·������������������֮�ͣ���˳��β�����output����
  * input: [5] [5]; excepted: [1,0]; output: [10]
  * �÷����޷������ж�������ͺ��λ�������  
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
