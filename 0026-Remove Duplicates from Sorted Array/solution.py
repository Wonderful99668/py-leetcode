class Solution:
    '''

Given a sorted array nums, remove the duplicates in-place
such that each element appear only once and return the new length.

Do not allocate extra space for another array,
you must do this by modifying the input array in-place with O(1) extra memory.

Example 1:
Given nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.

It doesn't matter what you leave beyond the returned length.
    '''

    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums:
            return 0

        count = 0

        for i in range(len(nums)):
            if nums[i] == nums[count]:
                continue
            else:
                count += 1
                nums[count] = nums[i]
        return count + 1

a = [0,0,1,1,1,2,2,3,3,4]
test = Solution().removeDuplicates(a)
print(test)
print(a)
