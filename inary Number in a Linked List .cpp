/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        for(int i=0;head!=NULL;i++){
            v.push_back(head->val);
            head=head->next;
        }
        int sum=0;
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
           v[i]=pow(2,i)*v[i];
           sum=sum+v[i];
        }
        return sum;
    }
};
