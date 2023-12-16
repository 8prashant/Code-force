class Solution {
public:
    //FUNCTION USED TO FIND THE HEIGHT OF THE TREE
    
    int he(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int x=max(he(root->left),he(root->right))+1;
        return x;
    }

    //FUNCTION USED TO FIND ALL THE NODE AT THE SAME LEVEL

    vector<vector<int>> levelOrder(TreeNode* root) {
        int h=he(root);
        vector<vector<int>> v(h);
        if(root==NULL){
            return v;
        }
        queue<TreeNode*> q;
        q.push(root);
        int j=0;
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* curr=q.front();
                q.pop();
                v[j].push_back(curr->val);
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
            }
            j++;
        }
        return v;
        
    }
};