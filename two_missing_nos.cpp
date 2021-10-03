#include<bits/stdc++.h>
void findTwoMissingNumbers(int arr[], int n)
{
    int XOR = arr[0];
    for (int i = 1; i < n-2; i++)
        XOR ^= arr[i];
    for (int i = 1; i <= n; i++)
        XOR ^= i;
    int set_bit_no = XOR & ~(XOR-1);
   int x = 0, y = 0; // Initialize missing numbers
    for (int i = 0; i < n-2; i++)
    {
        if (arr[i] & set_bit_no)
            x = x ^ arr[i]; /*XOR of first set in arr[] */
        else
            y = y ^ arr[i]; /*XOR of second set in arr[] */
    }
    for (int i = 1; i <= n; i++)
    {
        if (i & set_bit_no)
            x = x ^ i;        
            else
            y = y ^ i;    }
  
    printf("Two Missing Numbers are\n %d %d", x, y);
}
