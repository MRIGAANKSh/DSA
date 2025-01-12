// Parenthesis Checker
// Difficulty: EasyAccuracy: 28.56%Submissions: 627K+Points: 2
// You are given a string s representing an expression containing various types of brackets: {}, (), and []. Your task is to determine whether the brackets in the expression are balanced. A balanced expression is one where every opening bracket has a corresponding closing bracket in the correct order.

// Examples :

// Input: s = "{([])}"
// Output: true
// Explanation: 
// - In this expression, every opening bracket has a corresponding closing bracket.
// - The first bracket { is closed by }, the second opening bracket ( is closed by ), and the third opening bracket [ is closed by ].
// - As all brackets are properly paired and closed in the correct order, the expression is considered balanced.

#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    bool isParenthesisBalanced(string& s) {
        stack<char> st;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else if (ch == ')' || ch == '}' || ch == ']') {
                 if (st.empty() || !isMatchingPair(st.top(), ch)) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
private:
    bool isMatchingPair(char open, char close) {
        return (open == '(' && close == ')') ||
               (open == '{' && close == '}') ||
               (open == '[' && close == ']');
    }
};