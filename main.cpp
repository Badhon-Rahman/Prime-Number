#include <iostream>

using namespace std;

void Prime(int arr[], int n){

}

int main()
{
    int arrSize;
    cout << "Enter the array size: ";
    cin >> arrSize;

    int arr[100], result;
    cout << "Enter the array element: ";
    for(int i = 0; i < arrSize; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < arrSize; i++){
            for(int j = 2; j < arr[i] / 2; j++){
                if(arr[i] % j == 0){
                    cout << arr[i] << j << "p" << endl;
                    break;
                }
            }
    }
    //Prime(arr, arrSize);
    return 0;
}
