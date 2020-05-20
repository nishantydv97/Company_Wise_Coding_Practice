/*

We are given a binary tree (with root node root), a target node, and an integer value K.

Return a list of the values of all nodes that have a distance K from the target node.  The answer can be returned in any order.

 

Example 1:

Input: root = [3,5,1,6,2,0,8,null,null,7,4], target = 5, K = 2

Output: [7,4,1]

Explanation: 
The nodes that are a distance 2 from the target node (with value 5)
have values 7, 4, and 1.



Note that the inputs "root" and "target" are actually TreeNodes.
The descriptions of the inputs above are just serializations of these objects.

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
    void show(TreeNode * root){
        if(root==NULL){
            return;
        }else{
            show(root->left);
            cout<<root->val<<" ";
            show(root->right);
        }
    }
    unordered_map<TreeNode*,set<TreeNode *>> bst_to_graph(TreeNode * root){
        unordered_map<TreeNode*,set<TreeNode *>> ump;
        stack<TreeNode *> stk;
        stk.push(root);
        while(!stk.empty()){
            TreeNode * topi = stk.top();
            stk.pop();
            //ump[root].push_back(root);
            if(topi->left){
                ump[topi].insert(topi->left);
                ump[topi->left].insert(topi);
                stk.push(topi->left);
            }
            if(topi->right){
                ump[topi].insert(topi->right);
                ump[topi->right].insert(topi);
                stk.push(topi->right);
            }
        }
        return ump;
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
        vector<int> v;
        //cout<<"helll";
        //show(root);
        if(K==0){
            v.push_back(target->val);
            return v;
        }
        unordered_map<TreeNode*,set<TreeNode *>> mp1 = bst_to_graph(root);
        /*
        for(auto i : mp1){
            cout<<i.first->val<<" -> ";
            for(auto j : i.second){
                cout<<j->val<<" ";
            }
            cout<<"\n";
        }
        */
        unordered_map<TreeNode*, bool> umv;
        unordered_map<TreeNode*, int> umd;
        umv[target]=true;
        umd[target]=0;
        stack<TreeNode *> stk;
        stk.push(target);
        while(!stk.empty()){
            TreeNode* topi=stk.top();
            stk.pop();
            for(auto i : mp1[topi]){
                if(umv.find(i)==umv.end()){
                    umv[i]=1;
                    if(umd[topi]<K-1){
                        umd[i]=umd[topi]+1;
                        stk.push(i);
                    }else{
                        v.push_back(i->val);
                    }
                }
                
            }
        }      
        return v;
    }
};
