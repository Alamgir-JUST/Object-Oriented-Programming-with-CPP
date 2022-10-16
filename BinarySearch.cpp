#include<iostream>
using namespace std;
int Binary_Searcy(int arr[], int s, int key){
    int l = 0;
    int r = s - 1;
    while(l <= r){
        int mid = l + (r - l)/2;
        if(key == arr[mid]){
            return mid;
        }else if(key < arr[mid]){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    return -1;
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
    cout<<"Enter the search value: ";
    int key;
    cin>>key;
    int res = Binary_Searcy(arr, s, key);
    if(res == -1){
        cout<<key<<" not found in the array."<<endl;
    }else{
        cout<<key<<" found at position: "<<res + 1<<endl;
    }
    return 0;
}

/*
Test: 1
Enter the size of the array: 5
Enter the elements of the array: 4 8 10 23 40
Enter the search value: 4
4 found at position: 1

Test: 2
Enter the size of the array: 5
Enter the elements of the array: 10 30 40 50 60
Enter the search value: 5
5 not found in the array.
*/

/*
=====Time complexity====
Best Case: O (1)
Worst Case/Average Case: log(n)
*/
