#Uma pilha que só cresce ou diminui. É ordenada em ordem crescente ou descrescente
# 496. Next Greater Element I

class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        stack = []
        map = {}

        for num in nums2:
            while stack and num > stack[-1]:
                map[stack.pop()] = num

            stack.append(num)

        return [map.get(num,-1) for num in nums1]
