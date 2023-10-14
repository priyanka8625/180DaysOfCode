//Given an array, rotate the array by one position in clock-wise direction.


void rotate(int arr[], int n)
{
    for(int i=1; i<n; i++)
        swap(arr[0],arr[i]);
    
}
