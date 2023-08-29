    // int height(TreeNode* root){
    //     if(root==NULL){
    //         return 0;
    //     }
        
    //     int lefth=height(root->left);
    //     int righth=height(root->right);
    //     int h = max(lefth,righth)+1;
    //     return h;
        
    // }
    // int diameterOfBinaryTree(TreeNode* root) {
         
    // // Function to return the diameter of a Binary Tree.
    
    //     // Your code here
    //     if(root==NULL){
    //         return 0;
    //     }
    //     int op1=diameterOfBinaryTree(root->left);
    //     int op2=diameterOfBinaryTree(root->right);
    //     int op3 = height(root->left)+height(root->right);
    //     int ans = max(op1,max(op2,op3));
    //     return ans;
    // }

// optimized o(n)

    int height(TreeNode* root,int& dia){
        if(root==NULL)return 0;
        
        int lh = height(root->left,dia);
        int rh = height(root->right,dia);
        
        dia = max(dia,lh+rh);
        
        return max(lh,rh)+1;
    }


    int diameterOfBinaryTree(TreeNode* root) {
             int diameter =0;;
        height(root,diameter);
        
        return diameter;
    }
