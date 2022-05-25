#include<bits/stdc++.h>
#include<stack>
using namespace std;
const int maxn=128;
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        stack<int> sta;
        char arr[maxn];
        bool judge=true;
        gets(arr);
        for(int j=0;j<strlen(arr);j++)
        {
            if(arr[j]=='(' || arr[j]=='[')
            {
                sta.push(arr[j]);
                continue;
            }

            if(!sta.empty() && (arr[j]==')' && sta.top()=='(' || arr[j]==']' && sta.top()=='['))
                sta.pop();
            else
            {
                judge=false;
                break;
            }
        }
        if(judge && sta.empty())printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}