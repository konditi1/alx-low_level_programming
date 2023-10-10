#!/usr/bin/python3
def linear_search(arr, value):
    if arr is None:
        return print("Array is empty")
    for index in range(len(arr)):
        print(f"value checked array[{index}] = {arr[index]}")
        if arr[index] == value:
            return print(f"Found {value} at index: {index}")
    return print(f"{value} is not in array")

linear_search([10, 8, 1, 42, 1, 3, 4, 42, 6, 7, -1, 9], 1)