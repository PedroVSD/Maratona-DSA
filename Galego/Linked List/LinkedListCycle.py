# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        ponteiro_atual = head
        proximo_ponteiro = head

        while proximo_ponteiro and proximo_ponteiro.next:
            ponteiro_atual = ponteiro_atual.next
            proximo_ponteiro = proximo_ponteiro.next.next

            if ponteiro_atual == proximo_ponteiro:
                return True

        return False
