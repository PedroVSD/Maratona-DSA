#917. Reverse Only Letters
class Solution:
    def reverseOnlyLetters(self, s: str) -> str:
        s_list = list(s)
        right = len(s) - 1
        left = 0
        aux = 0

        while left < right:
            if s_list[left].isalpha() and s_list[right].isalpha():
                aux = s_list[left]
                s_list[left] = s_list[right]
                s_list[right] = aux

                left += 1
                right -= 1

            elif s_list[left].isalpha():
                right -= 1

            elif s_list[right].isalpha():
                left += 1

            else:
                left += 1
                right -= 1

        return "".join(s_list)
