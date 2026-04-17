#387. First Unique Character in a String

class Solution:
    def firstUniqChar(self, s: str) -> int:
        char = {}

        for char_idex, ch in enumerate(s):
            if not char.get(ch):
                char[ch] = [char_idex, 1]
            else:
                char[ch][1] += 1

        for ch, val in char.items():
            if val[1] == 1:
                return val[0]

        return -1
