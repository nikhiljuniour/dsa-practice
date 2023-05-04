#include<bits/stdc++.h>
using namespace std;

int main() {
/*
2244.leetcode 
minimum rounds to complete all tasks 
You are given an array tasks, where tasks[i] represents the difficulty level of a task. In each round, you can complete either 2 or 3 tasks of the same difficulty level.Return the minimum rounds required to complete all the tasks, or -1 if not possible.
*/
   int arr[10] = {2, 2, 3, 3, 2, 4, 4, 4, 4, 4}; // ans = 4
   unordered_map<int, int> dp;

   for(int i=0; i<10; i++) dp[arr[i]]++;

   int result = 0;
   for(auto it: dp) {
    if(it.second == 1) return -1;

    result += (it.second / 3);
    if(it.second % 3) result++;
   }

   cout << result << endl;


    return 0;
}

/*
- sabse pehle usko count karna hai jo 3 se divide ho jaa raha hai. bcoz min rounds pucha hai. 
- (kisi bhi count % 3) karne par remainder < 3 hi ayega.
  aur agar < 3 hai toh woh 1 more iteration mein cover ho jayega. 
*/