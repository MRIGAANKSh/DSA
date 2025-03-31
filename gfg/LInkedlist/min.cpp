#include <stack>
#include <limits.h>

class Solution {
  private:
    std::stack<int> stack;
    std::stack<int> minStack;

  public:
    Solution() {
        // Constructor initializes an empty stack
    }

    // Add an element to the top of Stack
    void push(int x) {
        stack.push(x);
        // Push to minStack if it's empty or x is the new minimum
        if (minStack.empty() || x <= minStack.top()) {
            minStack.push(x);
        }
    }

    // Remove the top element from the Stack
    void pop() {
        if (!stack.empty()) {
            if (stack.top() == minStack.top()) {
                minStack.pop();  // Remove from minStack if it's the minimum
            }
            stack.pop();
        }
    }

    // Returns top element of the Stack
    int peek() {
        return stack.empty() ? -1 : stack.top();
    }

    // Finds minimum element of Stack
    int getMin() {
        return minStack.empty() ? -1 : minStack.top();
    }
};
