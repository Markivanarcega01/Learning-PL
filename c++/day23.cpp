#include <iostream>
using namespace std;

int main(){

    //Reverse an array using bubble sort algorithm
    int arr[5] = {5,4,3,2,1};
    int arrLength = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i < arrLength; i++){
        for(int j=1; j < arrLength; j++){
            // int &index0 = arr[j-1];
            // int *ptr0 = &index0;

            // int &index1 = arr[j];
            // int *ptr1 = &index1;
            //cout << "orig:" << *ptr0 << *ptr1 << endl;
            int index0 = arr[j-1];
            int index1 = arr[j];
            cout << "orig:" << arr[j-1] << arr[j] << endl;
            if(index0 > index1){
                arr[j-1] = index1;
                arr[j] = index0;
            }

            //cout << "new:" << *ptr0 << *ptr1 << endl;
            cout << "new:" << arr[j-1] << arr[j] << endl;
        }
        for(int k=0; k<arrLength; k++){
            cout << arr[k] << ",";
        }
        cout << endl;
    }

    return 0;
}