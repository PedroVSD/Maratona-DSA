#338. Counting Bits

'''class Solution:
    def countBits(self, n: int) -> List[int]:

        return [i.bit_count() for i in range(n + 1)]'''

class Solution:
    def countBits(self, n: int) -> List[int]:

        array_nums = []
        array_bits = []

        for i in range(n + 1):
            array_nums.append(i)

        for j in range(len(array_nums)):
            array_nums[j] = bin(array_nums[j])[2:]
            array_bits.append(array_nums[j].count('1'))

        return array_bits
