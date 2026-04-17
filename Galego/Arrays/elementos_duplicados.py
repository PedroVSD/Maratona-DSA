# 217. Contains Duplicate
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        nums_set = set(nums)
        length_list = len(nums)
        length_set = len(nums_set)

        if length_list == length_set:
            return False
        else:
            return True
