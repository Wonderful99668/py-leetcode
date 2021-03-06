"""  
We are playing the Guess Game. The game is as follows:

I pick a number from 1 to n. You have to guess which number I picked.

Every time you guess wrong, I'll tell you whether the number is higher or lower.

You call a pre-defined API guess(int num) which returns 3 possible results (-1, 1, or 0):

-1 : My number is lower
1 : My number is higher
0 : Congrats! You got it!

注意：My 代表的是given number

Example :

Input: n = 10, pick = 6
Output: 6
"""

# The guess API is already defined for you.
# @param num, your guess
# @return -1 if my number is lower, 1 if my number is higher, otherwise return 0


def guess(num: int) -> int: pass


class Solution:
    def guessNumber(self, n: int) -> int:
        lo, hi = 1, n
        while lo <= hi:
            mid = (lo+hi)//2
            g = guess(mid)
            if g < 0:
                hi = mid - 1
            elif g > 0:
                lo = mid + 1
            else:
                return mid
