//Disney Hotstar Interview

/*Question was -  to sort a given array such that all even number sort in ascending order and all odd number sort in desending order\
Input : {1, 2, 3, 5, 4, 7, 10}
Output : {7, 5, 3, 1, 2, 4, 10}
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1, 2, 3, 5, 4, 7, 10};
    int i = 0, j = arr.size() - 1;
    while(i < j){
        int maxi = INT_MIN;
        int idx = -1;
        for(int k = i; k <= j; k++)
        {
            if(maxi < arr[k]){
                maxi = arr[k];
                idx = k;
            }
        }
        if(maxi % 2 == 0){
            swap(arr[idx], arr[j]);
            j--;
        }
        else{
            swap(arr[idx], arr[i]);
            i++;
        }
    }
 for(int i = 0; i < arr.size(); i++)
 cout << arr[i] << " ";
 return 0;
}

