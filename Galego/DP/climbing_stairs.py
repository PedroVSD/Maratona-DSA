#70 climbin stairs
class Solution:
    def climbStairs(self, n: int) -> int:
        if (n==1):
            return 1

        prev = 1
        current = 1

        for i in range(2,n+1):
            temp = current
            current = prev + current
            prev = temp

        return current
