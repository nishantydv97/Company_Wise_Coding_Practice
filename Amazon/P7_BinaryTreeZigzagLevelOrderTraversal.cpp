/*


Given a binary tree, return the zigzag level order traversal of its nodes' values. (ie, from left to right, then right to left for the next level and alternate between).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its zigzag level order traversal as:
[
  [3],
  [20,9],
  [15,7]
]


*/





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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root==NULL){
            return v;
        }
        stack<TreeNode *> s1;
        stack<TreeNode *> s2;
        s1.push(root);

        while(!s1.empty() or !s2.empty()){
            vector<int> v1;
            while(!s1.empty()){
                TreeNode * tmp=s1.top();
                
                s1.pop();
                v1.push_back(tmp->val);
                if(tmp->left!=NULL){
                    s2.push(tmp->left);
                }
                if(tmp->right!=NULL){
                    s2.push(tmp->right);
                }
            }
            
            
            //cout<<"hello v1 is "<<endl;
            //for(auto i : v1){
            //    cout<<i<<" ";
            //}
            //cout<<endl;
            if(size(v1)>0){
                v.push_back(v1);
            }
            
            vector<int> v2;
            while(!s2.empty()){
                TreeNode * tmp=s2.top();
                s2.pop();
                v2.push_back(tmp->val);
                if(tmp->right!=NULL){
                    s1.push(tmp->right);
                }
                if(tmp->left!=NULL){
                    s1.push(tmp->left);
                }
            }
            //cout<<"\n"<<" value of v2 is ";
            //for(auto i : v2){
            //    cout<<i<<" ";
            //}
            //cout<<endl;
            //v2.push_back(1);
            if(size(v2)>0){
                v.push_back(v2);
            }
            
        }

        return v;
    }
};
