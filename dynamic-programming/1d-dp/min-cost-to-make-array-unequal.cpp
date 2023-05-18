#include <bits/stdc++.h>
using namespace std;

int main()
{
/*
minimum cost to make array unequal. leetcode 2499
You are given two 0-indexed integer arrays arr1 and arr2, of equal length n.
In one operation, you can swap the values of any two indices of arr1. The cost of this operation is the sum of the indices.
Find the minimum total cost of performing the given operation any number of times such that arr1[i] != arr2[i].
In case it is not possible, return -1.
*/

    int n = 12;
    int arr1[n] = {4, 2, 2, 5, 4, 4, 5, 3, 4, 4, 4, 7};
    int arr2[n] = {4, 2, 2, 2, 4, 4, 5, 3, 4, 4, 4, 9};

    map<int, int> dp;
    int maxFreq = 0, maxFreqValue = 0, toSwap = 0, ans = 0;
    for(int i=0; i<n; i++) {
        if(arr1[i] == arr2[i]) {
            dp[arr1[i]]++;
            if(dp[arr1[i]] > maxFreq) {
                maxFreq = dp[arr1[i]];
                maxFreqValue = arr1[i];
            }
            toSwap++;
            ans += i;
        }
    }

    for(int i=0; i<n; i++) {
        if(maxFreq > toSwap/2 && arr1[i] != arr2[i] && arr1[i] != maxFreqValue && arr2[i] != maxFreqValue) {
            toSwap++;
            ans += i;
        }
    }

    return maxFreq > toSwap/2 ? -1 : ans;

    // return 0;
}