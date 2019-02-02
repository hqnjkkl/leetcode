//
//  BinaryTreeMaximumPathSum.h
//  leetcodeProject
//
//  Created by HuQiaoNan on 14-8-22.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//

#ifndef __leetcodeProject__BinaryTreeMaximumPathSum__
#define __leetcodeProject__BinaryTreeMaximumPathSum__

#include <iostream>
#include <algorithm>
#endif /* defined(__leetcodeProject__BinaryTreeMaximumPathSum__) */
using namespace std;
//11:12->
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class Solution{
public:
    int res = 0;
    int maxPathSum(TreeNode *root){
        if(root==NULL){
            return 0;
        }
        res = root->val;
        recursive(root);
        return res;
    }
    int recursive(TreeNode *root)
    {
        int sum = 0,leftSum=0,rightSum=0,maxSub=0;
        if(root!=NULL)
        {
            sum = root->val;
            if(root->left!=NULL)
            {
                leftSum = recursive(root->left);
                res = max(leftSum,res);
                sum = max(sum,root->val+leftSum);
            }
            if(root->right!=NULL)
            {
                rightSum = recursive(root->right);
                res = max(rightSum,res);
                sum = max(sum,root->val+rightSum);
            }
            if(root->left!=NULL&&root->right!=NULL)
            {
                res = max(res,leftSum+rightSum+root->val);
            }else{
            res = max(res,sum);
            }
            return sum;
        }else{
            return 0;
        }
    }
};