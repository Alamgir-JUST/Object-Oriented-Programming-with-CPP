#include<iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++){
        int check = 0;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                check = 1;
            }
        }
        if(check == 0){ //For best case complexity
            break;
        }
    }
    cout<<"Sorted array is: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int s;
    cout<<"Enter the size of the array: ";
    cin>>s;
    cout<<"Enter the elements of the array: ";
    int arr[s];
    for(int i = 0; i < s; i++){
        cin>>arr[i];
    }
    BubbleSort(arr, s);
    return 0;
}

/*
Test-1:
Enter the size of the array: 5
Enter the elements of the array: 8 3 20 10 1
Sorted array is: 1 3 8 10 20

Test-2:
Enter the size of the array: 5
Enter the elements of the array: 10 9 3 10 5
Sorted array is: 3 5 9 10 10


====Time Complexity====
Best case: O (n)
Worst Case: O (n * n)
*/
