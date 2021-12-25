Problem:
https://practice.geeksforgeeks.org/problems/change-the-string3541/1/?company[]=Oracle&company[]=Oracle&problemStatus=unsolved&page=1&query=company[]OracleproblemStatusunsolvedpage1company[]Oracle#
Statement:
Given a string S, the task is to change the complete string to Uppercase or Lowercase depending upon the case for the first character.

Example 1:

Input:
S = "abCD"
Output: abcd
Explanation: The first letter (a) is 
lowercase. Hence, the complete string
is made lowercase.

â€‹Example 2:

Input: 
S = "Abcd"
Output: ABCD
Explanation: The first letter (A) is
uppercase. Hence, the complete string
is made uppercase.

Your Task:
You don't need to read input or print anything. Your task is to complete the function modify() which takes the string S as input and returns the resultant string with stated modifications.


Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1) for C++ and O(|S|) for output in Java/Python.

Solution:
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
    
    string modify (string s)
    {
        bool flag=0;
        string ans="";
        
        if((int)s[0]>=97)
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
        
        
        if(flag==0)
        {
            for(int i=0;i<s.length();i++)
            {
               char c=toupper(s[i]);
               ans=ans+c;
            }
         
        }
        else
        {
          for(int i=0;i<s.length();i++)
            {
                char d=tolower(s[i]);
                ans=ans+d;
            }
        }
        return ans;
    }
};
