#20. Valid Parentheses

class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        pares = {
            ')': '(',
            '}':'{',
            ']': '['
        }

        for i in s:
            if i in pares:
                if stack and stack[-1] == pares[i]:
                    stack.pop()
                else:
                    return False

            else:
                stack.append(i)

        return not len(stack)
