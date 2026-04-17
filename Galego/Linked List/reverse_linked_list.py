# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        auxiliar = None

        while head:
            proximo_no = head.next
            head.next = auxiliar
            auxiliar = head
            head = proximo_no

        return auxiliar
