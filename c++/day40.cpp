#include <iostream>
int& getElement(int arr[], int index)
{
    return arr[index]; // Returns a reference to an element in the array
}
int main()
{
    int myArray[] = {1,2,3};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    getElement(myArray, 1) = 5; // Modifies myArray[1] to 5
    // myArray is now {1, 5, 3}
    for(int i = 0; i< size; i++){
        std::cout << myArray[i] << std::endl;
    }
    return 0;
}