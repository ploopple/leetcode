#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {};
};

int main(void)
{
    TreeNode *treeNode = new TreeNode(7);
    treeNode->left = new TreeNode(4);
    treeNode->right = new TreeNode(3);
    treeNode->right->right = new TreeNode(19);
    treeNode->right->left = new TreeNode(6);
    
    TreeNode *treeNodeClone = treeNode;

    treeNode->left = new TreeNode(234);

    std::cout << treeNode->left->val << std::endl;
    std::cout << treeNodeClone->left->val << std::endl;

    return 0;
}
