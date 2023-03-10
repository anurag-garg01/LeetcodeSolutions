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


// return random node value 
// store it into a vector and use get random method of c++

// yeah so tc ; o(n)  &7 sc : o(n) is the way to solve in humanly but there's radom size sampling also 



class Solution {
public:
    Solution(ListNode* head) {
        while(head!=NULL){
            arr.push_back(head->val);
            head=head->next;
        }
    }
    
    int getRandom() {
        return arr[rand()%(arr.size())];
    }
    private :
    vector<int> arr;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */