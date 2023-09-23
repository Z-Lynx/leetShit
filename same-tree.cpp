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

bool isSameTree(TreeNode *p, TreeNode *q)
{
    if (p == NULL && q == NULL)
    {
        return true;
    }
    if (p == NULL || q == NULL || p->val != q->val)
    {
        return false;
    }
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);

    /*
        if(p == NULL){
            return q == NULL;
        }
        if(q == NULL) return false;
        return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    */
}

int main()
{
    vector<int> cc1{1, 2, 3, 0, 0, 0};
    vector<int> cc2{2, 5, 6};
}