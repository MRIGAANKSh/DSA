// Check for BST
// Difficulty: EasyAccuracy: 25.37%Submissions: 551K+Points: 2
// Given the root of a binary tree. Check whether it is a BST or not.
// Note: We are considering that BSTs can not contain duplicate Nodes.
// A BST is defined as follows:

// The left subtree of a node contains only nodes with keys less than the node's key.
// The right subtree of a node contains only nodes with keys greater than the node's key.
// Both the left and right subtrees must also be binary search trees.

class Solution {
public:
    // Helper function to check BST properties within a range.
    bool isBSTUtil(Node* root, int minVal, int maxVal) {
        if (root == nullptr) {
            return true; // An empty tree is a BST.
        }

        // Check if the current node violates the BST property.
        if (root->data <= minVal || root->data >= maxVal) {
            return false;
        }

        // Recursively check the left and right subtrees.
        return isBSTUtil(root->left, minVal, root->data) &&
               isBSTUtil(root->right, root->data, maxVal);
    }

    // Main function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) {
        return isBSTUtil(root, INT_MIN, INT_MAX);
    }
};
