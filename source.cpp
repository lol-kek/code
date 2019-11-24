#include <iostream>

using namespace std;
 
int main()


{
    int inputArray[] = {23, 17, 1, 8, 38, 5, 7, 38, 5, 8, 6, 9, 2, 19, 11, 53, 11, 27, 2, 5, 6,};
    int inputSize = sizeof(inputArray)/sizeof(inputArray[0]);
 

    cout << "Original array: ";

    for (int i=0; i < inputSize; i++) 
    cout << inputArray[i] <<", ";

    cout <<"\nGeneration of result array containing only unique elements of the input array...";

    int outputArray = [10]; 
    // No more than 10 numbers

    for (int k=0; k<sizeof(outputArray); k++)


    {
        int j;

        for (j=0; j < inputSize; j++){

            int x = inputArray[j];

            // std::find returns an iterator to occurrence of x, or an iterator to one-past the end of the range if x is not in the array
            bool xExists = std::find(std::begin(inputArray), std::end(inputArray), x) != std::end(inputArray);

            if (xExists) continue;

            outputArray[k]=x;
        }
    }

    // Array created
    cout << "Output array: ";

    for (int l=0; l < 10; l++) 
    cout << outputArray[i] <<" ";

    return 0; 
}