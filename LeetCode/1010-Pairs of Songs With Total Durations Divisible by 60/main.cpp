/*
You are given a list of songs where the ith song has a duration of time[i]
seconds.

Return the number of pairs of songs for which their total duration in seconds is
divisible by 60. Formally, we want the number of indices i, j such that i < j
with (time[i] + time[j]) % 60 == 0.



Example 1:

Input: time = [30,20,150,100,40]
Output: 3
Explanation: Three pairs have a total duration divisible by 60:
(time[0] = 30, time[2] = 150): total duration 180
(time[1] = 20, time[3] = 100): total duration 120
(time[1] = 20, time[4] = 40): total duration 60
Example 2:

Input: time = [60,60,60]
Output: 3
Explanation: All three pairs have a total duration of 120, which is divisible
by 60.

Constraints:

1 <= time.length <= 6 * 104
1 <= time[i] <= 500

*/

#include <algorithm>;
#include <array>;
#include <iostream>;
#include <map>;
#include <queue>;

using namespace std;

/*
Explain the statement theOther = (60 - t % 60) % 60;

Let theOther be in the pair with t, then

(t + theOther) % 60 == 0
so we have

t % 60 + theOther % 60 = 0 or 60
then

theOther % 60 + t % 60 = 0
or
theOther % 60 = 60 - t % 60
Note that it is possible that t % 60 == 0, which results 60 - t % 60 == 60,

therefore, we should have:
theOther % 60 = (60 - t % 60) % 60

Since 0 <= theOther < 60, therefore thOther = theOther % 60.
use theOther to replace theOther % 60, we get:

theOther = (60 - t % 60) % 60;

*/

class Solution {
 public:
  int numPairsDivisibleBy60(vector<int>& time) {
    vector<int> counter(60);
    int res = 0;
    for (int t : time) {
      int theOther = (60 - t % 60) % 60;
      res += counter[theOther];
      counter[t % 60] += 1;
    }
    return res;
  }
};
