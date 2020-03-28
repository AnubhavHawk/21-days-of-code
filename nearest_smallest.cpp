// https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/nearest-smaller-element-929558b4/
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
void nearest_smallest(int *a, int n)
{
    int result[100];
    result[0] = -1;
    int min, i = n-1, j = 0;
    while(i > 0)
    {
        min = -1;
        for(int j = i - 1; j >= 0; j--)
        {
            if(a[j] < a[i])
            {
                min = a[j];
                break;
            }
        }
        result[i] = min;
        i--;
    }
    for(int i = 0; i < n; i++)
        cout<<result[i]<<" ";
}
int main()
{
    int a[] = {39, 27, 11, 4, 24, 32, 32, 1};
    int n = sizeof(a)/ sizeof(a[0]);
    nearest_smallest(a, n);
    return 0;
}