#leetcode 557. reverse words in a string 3
#Python as strings são imutáveis

class Solution:
    def reverseWords(self, s: str) -> str:
        resp = ""
        l = 0
        r = 0

        while r < len(s):
            if s[r] != ' ':
                r += 1
            else:
                resp += s[l:r+1][::-1]#entre l e r, já o [::-1] inverte
                r += 1
                l = r

        resp += " "
        resp += s[l:r + 2][::-1]
        return resp[1:]

"""
class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split()
        for i in range(len(words)):
            words[i] = words[i][::-1]
            
        result = ' '.join(words)
        return result
"""