int summ(Node *root,int & maxi)
    {
        if(root==NULL)
        return 0;
        int lh=summ(root->left,maxi);
        int rh=summ(root->right,maxi);
        if(root->left != NULL and root->right!=NULL)
        {maxi=max(maxi,lh+root->data+rh);
        }
        if(root->left==NULL and root->right)
        {
            return rh+root->data;
        }
                if(root->right==NULL and root->left)
        {
            return lh+root->data;
        }
        return max(lh,rh)+root->data;
    }
public:
    int maxPathSum(Node* root)
    {int maxi=INT_MIN;
        int ans= summ(root,maxi);
       if(maxi==INT_MIN)
        return ans;
    return maxi;
    }
