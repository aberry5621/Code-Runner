//
//  main.cpp
//  Code Runner
//
//  Created by ax on 9/25/16.
//  Copyright © 2016 COMP130. All rights reserved.
//


#define prog 3

#if(prog == 3)

#include <iostream>
using namespace std;

int main() {

    cout << "Selection Sort! \n";
    
    // need an integer array to work with
    const int ARRAY_SIZE = 5;
    int my_array[ARRAY_SIZE] = {9, 5, 2, 8, 1};

    cout << "init array state: \n";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << my_array[i] << " ";
    }
    
    cout << endl;
    
    // selection sort
    
    
    // outer loop tracks array split: sorted and unsorted
    for (int i = 0; i <= ARRAY_SIZE; i++) {
        
        cout << "i loop: " << i << endl;
        
        int current_min_index = i;
        
        cout << "current index value: " << my_array[current_min_index] << endl;
        
        int current_min = my_array[i];
        
        // inner loop
        // collect for compare the left most item for sort compare
        // search for smaller value on unsorted side of array
        // if find smaller value, swap into init position
        for (int j = i + 1; j < ARRAY_SIZE; j++) {
            int check_min = my_array[j];
            if (current_min > check_min) {
                current_min = my_array[j];
                current_min_index = j;
            }
            if (current_min_index != i) {
                my_array[current_min_index] = my_array[i];
                my_array[i] = current_min;
            }
        }
        
    }
    
    cout << "end array state: \n";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << my_array[i] << " ";
    }
    
    cout << endl;
    return 0;
}



#elif(prog == 2)

#include <iostream>
using namespace std;

int main() {
    
    cout << "Bubble Sort! \n";
    
    // need an integer array
    const int ARRAY_SIZE = 5;
    int my_array[ARRAY_SIZE] = {9, 5, 2, 8, 1};
    
    cout << "init array state: \n";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << my_array[i] << " ";
    }
    
    cout << endl;
    
    // marker loop
    // marker sets the bottom point of the iterator loop
    // counts up (from high to low) by decrement
    for (int i = ARRAY_SIZE - 1; i >= 0; i--) {
        
        // need an iterator loop
        // counts down,
        // makes compares,
        // swaps order of numbers
        for (int j = 0; j <= i - 1; j++) {
            if (my_array[j] > my_array[j + 1]) {
                swap(my_array[j], my_array[j + 1]);
            }
        }
    }
    
    cout << "end array state: \n";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << my_array[i] << " ";
    }
    
    cout << endl;

    
    return 0;
}

#elif(prog == 1)

#include <iostream>
using namespace std;

// SHUFFLE

int main() {
    
    // random seed
    srand(time(0));
    
    // need an integer array
    const int ARRAY_SIZE = 5;
    int my_array[ARRAY_SIZE] = {9, 5, 2, 8, 1};
    
    cout << "init array state: \n";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << my_array[i] << " ";
    }
    cout << endl;
    // do the shuffle
    for (int i = 0; i < ARRAY_SIZE; i++) {
        // pick random slot in array
        int j = rand() % (i + 1);
        
        int tmp = my_array[i];
        my_array[i] = my_array[j];
        my_array[j] = tmp;
    }

    cout << "end array state: \n";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << my_array[i] << " ";
    }
    cout << endl;
    return 0;
}


#endif