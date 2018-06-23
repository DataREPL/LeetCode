/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> > xx;
        if(root == NULL) return xx;
        queue<TreeNode* > q;
        queue<TreeNode* > p;
        q.push(root);
        TreeNode* tmp;

        while(!q.empty() || !p.empty()) {

            vector<int> x;
            while(!q.empty()) {

                tmp = q.front();

                x.push_back(tmp->val);

                if(tmp->left) p.push(tmp->left);
                if(tmp->right) p.push(tmp->right);
                q.pop();
            }
            if(x.size() != 0)
                xx.push_back(x);

            vector<int> xs;
            while(!p.empty()) {

                tmp = p.front();

                xs.push_back(tmp->val);

                if(tmp->left) q.push(tmp->left);
                if(tmp->right) q.push(tmp->right);
                p.pop();
            }

            if(xs.size() != 0)
                xx.push_back(xs);

        }

        return xx;

    }
};
