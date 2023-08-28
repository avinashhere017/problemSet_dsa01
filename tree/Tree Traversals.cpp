// void preorder(TreeNode* root,vector<int> & v){
//     if(root==NULL){
//         return;
//     }
//     v.push_back(root->data);
//     preorder(root->left,v);
//     preorder(root->right,v);
// }
// void inorder(TreeNode* root,vector<int> & v){
//     if(root==NULL){
//         return;
//     }
    
//     inorder(root->left,v);
//     v.push_back(root->data);
//     inorder(root->right,v);
// }
// void postorder(TreeNode* root,vector<int> & v){
//     if(root==NULL){
//         return;
//     }
    
//     postorder(root->left,v);
//     postorder(root->right,v);
//     v.push_back(root->data);
// }



// vector<vector<int>> getTreeTraversal(TreeNode *root){
//     // Write your code here.

//     vector<vector<int>> ans;
//     if(root==NULL){
//         return ans;
//     }
//     vector<int> v;
//     vector<int> v2;
//     vector<int> v3;

//     inorder(root,v);
//     ans.push_back(v);
//     preorder(root,v2);
//     ans.push_back(v2);
//     postorder(root, v3);
//     ans.push_back(v3);

//     return ans;




// 2nd

void inorder(TreeNode * root,vector<int> &vec){

    if(root == NULL) return;

 

    inorder(root->left ,vec );

    vec.push_back(root->data);

    inorder(root->right,vec);

}

 

void preorder(TreeNode * root,vector<int> &vec){

    if(root == NULL) return;

 

    vec.push_back(root->data);

    preorder(root->left,vec);

    preorder(root->right,vec);

}

 

void postorder(TreeNode * root,vector<int> &vec){

    if(root == NULL) return;

 

    postorder(root->left,vec);

    postorder(root->right,vec);

    vec.push_back(root->data);

}

 

vector<vector<int>> getTreeTraversal(TreeNode *root){

    vector<vector<int>> ans(3);

    inorder(root,ans[0]);

    preorder(root,ans[1]);

    postorder(root,ans[2]);

    return ans;





}
