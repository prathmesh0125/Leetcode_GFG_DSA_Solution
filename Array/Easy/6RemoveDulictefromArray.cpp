#include <iostream>
using namespace std;

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int ReMoveDupli(int arr[], int size)
{


    // optimal approch

    int i = 0;
    for (int j = 0; j < size; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
    //   print(arr,6);

        }
    }
    return i + 1;
}

int main()
{
    int arr[6] = {1, 1, 2, 3, 3, 5};
    
     ReMoveDupli(arr, 6);
      print(arr,6);
}