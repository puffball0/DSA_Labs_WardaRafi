#include <iostream>
#include <vector>
using namespace std;

//defining a vector function to find all indices of a
vector<int> findAllIndices(int arr[], int size, int key) {
    vector<int> indices;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            indices.insert(indices.end(), i);
        }
    }
    return indices;
}
int main() {
    //test case: multiple occurences
    //declaring an array 
    int arr[] = {1, 2, 3, 2, 4, 2};
    //calculating the size of the array
    int size = sizeof(arr) / 4;
    //declaring a key to search in array
    int key = 2;
    //calling the function
    vector<int> result = findAllIndices(arr, size, key);
    cout<<"Indices of "<<key<<" are:";
    for (int index : result) {
        cout << index << " ";
    }
    cout<<endl;
    return 0;
}