#include <iostream>
#include <algorithm>

using namespace std;

void selectionSort(int arr[], int n){

    for(int i = 0 ; i < n ; i ++){
        // 寻找[i, n)区间里的最小值
        int minIndex = i;
        for( int j = i + 1 ; j < n ; j ++ )
            if( arr[j] < arr[minIndex] )
                minIndex = j;

        swap( arr[i] , arr[minIndex] );
    }

} 

int main(){

    int a[] = {10,1,9,2,5,6,4,3,7,8,99,85,64,8,66,55,44,33,22,11};
    selectionSort(a,sizeof(a)/4);
    for( int i = 0 ; i < sizeof(a)/4 ; i ++ )
        cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}
