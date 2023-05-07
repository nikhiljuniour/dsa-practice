#include<bits/stdc++.h>
using namespace std;

int main() {
/*
2498. leetcode
you are given a 0-indexed integer array stones sorted in strictly increasing order representing the positions of stones in a river.
A frog, initially on the first stone, wants to travel to the last stone and then return to the first stone. However, it can jump to any stone at most once.
The length of a jump is the absolute difference between the position of the stone the frog is currently on and the position of the stone to which the frog jumps.
*/
   int n = 5;
   int stones[n] = {0, 2, 5, 6, 7};

   if(n == 2) return stones[1] - stones[0];
   else if(n == 3) return stones[2] - stones[0];

   int result = 0;
   for(int i=0; i<n-1; i+=2) {
    if(i+2 < n) result = max(result, stones[i+2] - stones[i]);
    if(i-1 >= 0) result = max(result, stones[i+1] - stones[i-1]);
   } 

   return result;

    return 0;
}

/*
- kabhi bhi 3 stones pese jump lena profitable nhi hoga. will cost more.
- aur agar 1 jump liya toh bhi return aane ke liye 2 jump lena padega. and ans will be max length of a path.
- It is never optimal to choose two consecutive rocks: If we choose rock_i, and rock_i+1, then rock_i+2 will have to do (rock_i+2)- 
  (rock_i) work to return. Because the array is strictly increasing
- It is optimal that we make use of all rocks: There is never a benefit of not including a rock in Path 1 or Path 2, it is always       
  positive or neutral.
*/