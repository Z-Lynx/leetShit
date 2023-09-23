#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void getNode(TreeNode *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    getNode(root->left, ans);
    ans.push_back(root->val);
    getNode(root->right, ans);
}
vector<int> inorderTraversal(TreeNode *root)
{
    vector<int> ans;
    getNode(root, ans);
    return ans;
}

int main()
{
    vector<int> cc1{1, 2, 3, 0, 0, 0};
    vector<int> cc2{2, 5, 6};
}