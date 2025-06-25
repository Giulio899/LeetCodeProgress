/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode actual = head;
        ListNode toChange = head;

        int i = n * (-1);

        if(n == 1 && head.next == null) return null;

        while(actual.next != null){
            if(i<0){
                i++;
            }
            else{
                toChange = toChange == null ? null : toChange.next;
                i++;
            }

            actual = actual.next;
        }

        if(i == -1) return head.next;

        toChange.next = toChange.next == null ? null : toChange.next.next;

        return head;
    }
}