// Stock span problem
// Difficulty: MediumAccuracy: 43.56%Submissions: 211K+Points: 4
// The stock span problem is a financial problem where we have a series of daily price quotes for a stock and we need to calculate the span of stock price for all days. The span arr[i] of the stocks price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the given day is less than or equal to its price on the current day.

// Examples:

// Input: arr[] = [100, 80, 60, 70, 60, 75, 85]
// Output: [1, 1, 1, 2, 1, 4, 6]
// Explanation: Traversing the given input span 100 is greater than equal to 100 and there are no more elements behind it so the span is 1, 80 is greater than equal to 80 and smaller than 100 so the span is 1, 60 is greater than equal to 60 and smaller than 80 so the span is 1, 70 is greater than equal to 60,70 and smaller than 80 so the span is 2 and so on.  Hence the output will be 1 1 1 2 1 4 6.

class Solution {
    public:
      vector<int> calculateSpan(vector<int>& arr) {
          vector<int> span(arr.size());
          stack<int> st;
          
          for (int i = 0; i < arr.size(); i++) {
              while (!st.empty() && arr[st.top()] <= arr[i]) st.pop();
              span[i] = st.empty() ? i + 1 : i - st.top();
              st.push(i);
          }
          return span;
      }
  };