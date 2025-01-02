#Missing in Array
#Difficulty: EasyAccuracy: 29.59%Submissions: 1.3MPoints: 2
#/#You are given an array arr of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.

#Examples:

#Input: arr[] = [1, 2, 3, 5]
#Output: 4
#Explanation: All the numbers from 1 to 5 are present except 4.
#Input: arr[] = [8, 2, 4, 5, 3, 7, 1]
#Output: 6
#Explanation: All the numbers from 1 to 8 are present except 6.

#code in python:
#User function Template for python3
def missingNumber(self, arr):
    num_set = set(arr)
    n = len(arr)
    for i in range(1, n + 2):
        if i not in num_set:
            return i
arr=[1,2,3,5]
missingNumber(arr)