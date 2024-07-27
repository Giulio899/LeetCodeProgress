# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseKGroup(self, head, k):
        """
        :type head: ListNode
        :type k: int
        :rtype: ListNode
        """
        if k==1: 
            return head

        to_cycle=head
        temp=[]
        last_sub_last=None
        res=None
        counter=1
        while(to_cycle is not None):
            new_node=ListNode(to_cycle.val,None)

            if counter % k == 0:
                if counter // k == 1:
                    res=new_node

                actual=new_node
                if last_sub_last is not None:
                    last_sub_last.next=new_node
                for i in range(k-1):
                    last_sub_last=temp.pop()
                    actual.next=last_sub_last
                    actual=last_sub_last

                
                temp=[]

            else:
                temp.append(new_node)

            counter=counter+1
            to_cycle=to_cycle.next
            
        for i in range(len(temp)):
            n=temp[i]
            last_sub_last.next=n
            last_sub_last=n
        return res

