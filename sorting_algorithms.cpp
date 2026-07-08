#include <iostream>
#include <vector>
using namespace std;

// Function to print the array elements
void printArray(const vector<int>& array) {
    for (size_t i = 0; i < array.size(); i++) {
        cout << array[i];
        if (i < array.size() - 1) cout << ", ";
    }
    cout << endl;
}

// ==========================================
// BUBBLE SORT
// ==========================================
void bubbleSort(vector<int>& array) {
    int n = array.size();
    int temp;
    
    // Outer loop for passes
    for (int i = 0; i <= n - 2; i++) {
        // Inner loop for comparing adjacent elements
        for (int j = 0; j <= n - i - 2; j++) {
            if (array[j] < array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// ==========================================
// INSERTION SORT
// ==========================================
void insertionSort(vector<int>& array) {
    int n = array.size();
    int temp;
    
    // Start from the second element
    for (int i = 1; i < n; i++) {
        int j = i;
        // Move backwards while the previous element is smaller
        while (j > 0 && array[j - 1] < array[j]) {
            temp = array[j - 1];
            array[j - 1] = array[j];
            array[j] = temp;
            j--; 
        }
    }
}

// ==========================================
// SELECTION SORT
// ==========================================
void selectionSort(vector<int>& array) {
    int n = array.size();
    int temp, index;
    
    // Outer loop to select the position
    for (int i = 0; i <= n - 2; i++) {
        index = i;
        // Inner loop to find the maximum element in the remaining array
        for (int j = i + 1; j <= n - 1; j++) {
            if (array[index] < array[j]) {
                index = j;
            }
        }
        // Swap if the maximum element is not at the current position
        if (index != i) {
            temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }
    }
}

int main() {
    // Initialize test data
    vector<int> data1 = {64, 34, 25, 12, 22, 11, 90};
    vector<int> data2 = {64, 34, 25, 12, 22, 11, 90};
    vector<int> data3 = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "=== SORTING ALGORITHMS DEMO (Descending Order) ===" << endl;
    cout << "Original array: ";
    printArray(data1);
    cout << endl;
    
    // Bubble Sort Execution
    cout << "--- BUBBLE SORT ---" << endl;
    cout << "Before: "; printArray(data1);
    bubbleSort(data1);
    cout << "After:  "; printArray(data1);
    cout << endl;
    
    // Insertion Sort Execution
    cout << "--- INSERTION SORT ---" << endl;
    cout << "Before: "; printArray(data2);
    insertionSort(data2);
    cout << "After:  "; printArray(data2);
    cout << endl;
    
    // Selection Sort Execution
    cout << "--- SELECTION SORT ---" << endl;
    cout << "Before: "; printArray(data3);
    selectionSort(data3);
    cout << "After:  "; printArray(data3);
    cout << endl;
    
    cout << "=== All sorting processes completed successfully! ===" << endl;
    
    return 0;
}
