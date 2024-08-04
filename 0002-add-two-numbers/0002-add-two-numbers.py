# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        init=True
        cipher=(l1.val+l2.val)%10
        rep=(l1.val+l2.val)//10
        res = ListNode(cipher)
        current_node=ListNode()
        myl1=l1
        myl2=l2
        while(myl1.next is not None and myl2.next is not None):
            myl1=myl1.next
            myl2=myl2.next
            cipher=(myl1.val+myl2.val+rep)%10
            rep=(myl1.val+myl2.val+rep)//10
            actual=ListNode(cipher)
            current_node.next=actual
            current_node=actual
            if init:
                res.next=current_node
                init=False

        while(myl1.next is not None):
            myl1=myl1.next
            cipher=(myl1.val+rep)%10
            rep=(myl1.val+rep)//10
            actual=ListNode(cipher)
            current_node.next=actual
            current_node=actual
            if init:
                res.next=current_node
                init=False

        while(myl2.next is not None):
            myl2=myl2.next
            cipher=(myl2.val+rep)%10
            rep=(myl2.val+rep)//10
            actual=ListNode(cipher)
            current_node.next=actual
            current_node=actual
            if init:
                res.next=current_node
                init=False

        if(rep==1):
            if init:
                res.next=ListNode(1)
                init=False
            else:
                current_node.next=ListNode(1)

        return res
        
