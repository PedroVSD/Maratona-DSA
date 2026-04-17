# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        ponteiro_rapido = head

        while(ponteiro_rapido != None and ponteiro_rapido.next):
            ponteiro_rapido = ponteiro_rapido.next.next
            head = head.next

        return head
