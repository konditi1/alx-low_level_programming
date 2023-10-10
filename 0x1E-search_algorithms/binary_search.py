#!/usr/bin/python3
# function that searches for a value in an array
# of integers using the binary search algorithm
def binary_search(arr, value):
    """
    function that searches for a value in an array    :param arr:  to search
        :param arr: array to search value
        :param value:  to search
    :return: first index where value is located or -1 if not found
    """
    if arr is None:
        return -1
    left = 0
    right = len(arr)-1
    while left <= right:
        mid = left + (right - left) // 2
        print(f"value checked array[{mid}] = {arr[mid]}")
        if arr[mid] == value:
            print(f"Value found between indexes [{left}] and [{right}]")
            return print(f"Found {value} at index: {mid}")
        elif value > arr[mid]:
            left = mid + 1
        else:
            right = mid - 1
    return print(f"Found {value} at index: -1")


binary_search([10, 8, 1, 42, 1, 3, 4, 42, 6, 7, -1, 9], 999)