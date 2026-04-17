array = [1, 2, 5, 3, 4, 7, 9, 4, 23, 10]

array.sort()
print(array)


def binary_search(array, flag: int) -> int:
    left = 0
    right = len(array) - 1
    while left <= right:
        middle = (left + right) // 2
        if array[middle] == flag:
            return middle

        if array[middle] < flag:
            left = middle + 1
        else:
            right = middle - 1
    return -1


print(binary_search(array, 10))
print(binary_search(array, 11))
