//
//  main.cpp
//  Code Runner
//
//  Created by ax on 9/25/16.
//  Copyright © 2016 COMP130. All rights reserved.
//


#define prog 5

#if(prog == 5)


#include <iostream>
using namespace std;

int main() {
    
    cout << "Binary Search" << endl;
    
    // read ordered array
    const int ARRAY_SIZE = 10;
    int my_array[ARRAY_SIZE] = {8, 14, 23, 36, 45, 59, 62, 77, 81, 92};
    
    cout << "init array state: \n";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << my_array[i] << " ";
    }
    cout << endl;
    
    // establish a key value
    int key = 77;
    int low = 0;
    int high = ARRAY_SIZE -1;
    int midpoint = (low + high) / 2;
    
    for (int i = 0; i < high; i++) {
        if (key < my_array[midpoint]) {
            cout << "key is less than midpoint" << endl;
            high = midpoint - 1;
        } else if (key == my_array[midpoint]) {
            cout << "key: "<< key <<" found at midpoint: " << my_array[midpoint] << endl;
            break;
        } else {
            cout << "key is more than midpoint" << endl;
            low = midpoint + 1;
        }
        midpoint = (low + high) / 2;
    }

    
    // split in twain
    // based on key numeric value
    // repeat search
    
    
    
    
    
    
    return 0;
    
    
}







#elif(prog == 4)


#include <iostream>
using namespace std;

int main() {
    
    cout << "Selection Sort Array Read Pattern! \n";
    
    // need an integer array to work with
    const int ARRAY_SIZE = 7;
    int my_array[ARRAY_SIZE] = {2, 9, 5, 4, 8, 1, 6};
    
    cout << endl;
    
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << "i loop iteration: " << i << endl;
        // find the minimum in the current set
        int min_number = my_array[i];
        
        for (int j = i; j < ARRAY_SIZE; j++) {
            cout << my_array[j] << " ";
            if (min_number > my_array[j]) {
                cout << "new min number found: " << my_array[j] << " ";
            }
        }
        
        cout << endl;
    }
    
    cout << endl;
    return 0;
}
    

#elif(prog == 3)

#include <iostream>
using namespace std;

int main() {

    cout << "Selection Sort! \n";
    
    // need an integer array to work with
    const int ARRAY_SIZE = 7;
    int my_array[ARRAY_SIZE] = {2, 9, 5, 4, 8, 1, 6};

    cout << "init array state: \n";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << my_array[i] << " ";
    }
    
    cout << endl;
    
    // selection sort
    
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << "i loop: " << i << endl;
        
        // find smallest element in the list
        int smallest_el = my_array[i];
        cout << "i smallest el : " << my_array[i] << endl;
        
        int smallest_el_idx = i;
        cout << "i smallest el idx : " << smallest_el_idx << endl;
        
        cout << "i loop array state as [k]: \n";
        for (int k = 0; k < ARRAY_SIZE; k++) {
            cout << my_array[k] << " ";
        }
        cout << endl;
        
        
        for (int j = i; j < ARRAY_SIZE; j++) {
            cout << "j loop: " << j << endl;
            if (smallest_el > my_array[j]) {
                // set smallest el value
                smallest_el = my_array[j];
                // mark smallest el array position
                smallest_el_idx = j;
                swap(my_array[smallest_el_idx], my_array[0]);
            }
        
        }
        
        //cout << "Found the smallest el as: " << smallest_el << endl;
        
        // swap changes the positions of two array elements
        
    }
    
    /*
    
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
    */
    
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