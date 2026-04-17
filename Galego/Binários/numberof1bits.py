#191. Number of 1 Bits

class Solution:
    def hammingWeight(self, n: int) -> int:
        n_bin = bin(n)
        nn_bin = bin(n)[2:]
        count = 0
        for i in range(len(nn_bin)):
            if nn_bin[i] == '1':
                count += 1

        return count
