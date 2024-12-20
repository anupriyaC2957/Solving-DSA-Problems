#include <iostream>
using namespace std;

void Print(int  arr[], int size)
{
   for( int i =0;i<size; i++)
   {
    cout<<arr[i]<<" ";
   }cout<<endl;
}

void swap_alternative(int arr[], int size)
{
    
    for ( int i = 0; i< size; i+= 2)
    {
        if ( i+1 <size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main() {
    int even[8] ={5, 2, 9, 4, 7, 6, 1, 0};
    int odd[5]= {11, 33, 9, 76, 43};

    swap_alternative(even,8);
    Print(even, 8);
    swap_alternative(odd,5);
    Print(odd, 5);

    
    return 0;
}
