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
    int count=0;
    //test case: Key not present. 
    //declaring an array 
    int arr[] = {1, 5, 3, 16, 4, 1};
    //calculating the size of the array
    int size = sizeof(arr) / 4;
    //declaring a key to search in array
    int key = 2;
    //calling the function
    vector<int> result = findAllIndices(arr, size, key);
    cout<<"Indices of "<<key<<" are:";
    for (int index : result) {
        cout << index << " ";
        count++;
    }
    cout<<endl;
    if (count==0)
        cout<<"Key not present in the array";
    cout<<endl;
    return 0;
}