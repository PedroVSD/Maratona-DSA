def twoSum(self, nums: List[int], target: int) -> List[int]:
        nums_dic = {}

        for index, i in enumerate(nums):
            if nums_dic.get(i) is not None:
                return[nums_dic.get(i), index]
            nums_dic[target - i] = index
