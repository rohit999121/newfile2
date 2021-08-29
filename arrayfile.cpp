#include <iostream>

using namespace std;

void equlibirium(int arr[],int n)
{
    int cur_sum = 0;
    for(int i=0;i<n;i++){
        cur_sum = cur_sum + arr[i];
    }
    int r_sum = cur_sum;
    int l_sum = 0;

    cout << "sum of the arrray in the element : "<< r_sum << endl;
    for(int i=0;i<n;i++){
        r_sum = r_sum - arr[i];
        if(r_sum == l_sum){
            cout << "postion of the element " << i << "\telemnt array :" << arr[i] << " ";
        }
        l_sum = l_sum + arr[i];
    }
}
int main()
{
    int arr[] = {10,5,3,7,6,9,6,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    equlibirium(arr,n);

    return 0;
}
