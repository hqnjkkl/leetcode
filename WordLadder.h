//
//  WordLadder.h
//  leetcodeProject
//
//  Created by HuQiaoNan on 14-8-22.
//  Copyright (c) 2014年 HuQiaoNan. All rights reserved.
//

#ifndef __leetcodeProject__WordLadder__
#define __leetcodeProject__WordLadder__

#include <iostream>

#endif /* defined(__leetcodeProject__WordLadder__) */

#include <string>
#include <unordered_set>
#include <set>
#include <set>
#include <queue>
//10:19 ->10:32 ->10:50 accept
using namespace std;
///using namespace stdext;
class Solution
{
    public:
    int ladderLength(string start,string end,unordered_set<string> &dict)
    {
        set<string> visit;
        int count = 1,len = 0,i=0,j=0,k=0;
        int len2 = start.size();
        queue<string> que;
        if(start.compare(end)==0)
        {
            return 1;
        }
        que.push(start);
        visit.insert(start);
        while(que.size()>0)
        {
            len = que.size();
            //cout<<que.size()<<endl;
            for(i=0;i<len;i++)
            {
                string tmp = que.front();
                que.pop();
                for(j=0;j<len2;j++)
                {
                    char tc = tmp[j];
                    for(k='a';k<'z';k++)
                    {
                        tmp[j] = k;
                        // remember the dictionary
                        if(dict.count(tmp)!=0)
                        {
                        if(visit.count(tmp)==0)
                        {
                            if(tmp.compare(end)==0)
                            {
                                cout<<tmp<<endl;
                                return count+1;
                            }
                            visit.insert(tmp);
                            que.push(tmp);
                        }
                        }
                    }
                    tmp[j] = tc;
                }
            }
            count++;
        }
    
    return 0;
    }
};