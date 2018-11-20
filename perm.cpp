#include <stdio.h> 
#include <string.h> 
#include<vector>  
#include<iostream>
/* Function to swap values at two pointers */
using namespace std;
void swap(char *x, char *y) 
{ 
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 
  
/* Function to print permutations of string 
   This function takes three parameters: 
   1. String 
   2. Starting index of the string 
   3. Ending index of the string. */
void permute(vector<string> &result, char *a, int l, int r) 
{ 
   int i; 
   if (l == r) 
     // printf("%s\n", a); 
    result.push_back(a);
   else
   { 
       for (i = l; i <= r; i++) 
       { 
          swap((a+l), (a+i)); 
          permute(result, a, l+1, r); 
          swap((a+l), (a+i)); //backtrack 
       } 
   } 
} 
  
/* Driver program to test above functions */
int main() 
{ 
    vector<string> result;
    char str[] = "ABC"; 
    int n = strlen(str); 
    permute(result, str, 0, n-1); 
    for(auto i: result)
      cout<<i<<endl;
    return 0; 
} 