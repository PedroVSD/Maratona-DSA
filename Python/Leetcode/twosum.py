def twoSum(nums, target):
    hashmap = {}

    for i in range(len(nums)):
        diference = target - nums[i]

        if diference in hashmap:
            return [hashmap[diference], i]
        else:
            return 'Target não está no array'

        hashmap[nums[i]] = i

print(twoSum([2, 7, 11, 15], 10))
