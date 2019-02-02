//
//  ValidPalindrome.h
//  leetcodeProject
//
//  Created by HuQiaoNan on 14-8-22.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//

#ifndef __leetcodeProject__ValidPalindrome__
#define __leetcodeProject__ValidPalindrome__

#include <iostream>

#endif /* defined(__leetcodeProject__ValidPalindrome__) */

using namespace std;
//10:59 ->11:11 finished
class Solution{
public:
  bool isPalindrome(string s)
    {
        if(s.size()==0||s==""){
            return true;
        }
        int len = s.size();
        int i = 0,j = len-1;
        while(i<j)
        {
            while(i<j)
            {
                
                if(isalnum(s[i]))
                {
                    break;
                }
                i++;
            }
            while(j>i)
            {
                
                if(isalnum(s[j]))
                {
                    break;
                }
                j--;
            }
            if(i<j)
            {
            char a = tolower(s[i]);
            char b = tolower(s[j]);
                if(a!=b){
                    return false;
                }
            }
            i++;
            j--;
        }
        return true;
    }
};