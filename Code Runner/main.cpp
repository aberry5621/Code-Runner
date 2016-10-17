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
    
    int i = 1;
    
    while (i < 10)  {
        if ( (++i) % 2 == 0)
            cout << i << endl;
    }
    
    return 0;
}
















#elif(prog == 4)

#include <iostream>
using namespace std;

int main() {
    
    int i = 1;

    while (i < 10)  {
        if ( (++i) % 2 == 0)
            cout << i << endl;
    }

    return 0;
}

#elif(prog == 3)

//  main.cpp
//  Book Exercise 6.3 - Palindrome Integer
//
//  Created by ax on 10/5/16.
//  Copyright © 2016 COMP130. All rights reserved.

#include<iostream>
#include<string>

using namespace std;

int return_revese(int& number_input) {
    
    int switcherooed = 0;
    
    int working_digits = number_input;
    
    while (working_digits > 0)
    {
        int slice_off_last_digit = working_digits % 10;
        
        switcherooed = switcherooed * 10 + slice_off_last_digit;
        
        working_digits = working_digits / 10;
    }
    
    return switcherooed;
}

bool is_palindrome(int number) {
    
    bool palindrome_match = 0;
    
    if (return_revese(number) == number)
        palindrome_match = 1;
    
    return palindrome_match;
}

int main() {
    
    int num_input = 0;
    
    cout << "Enter some numbers: ";
    
    cin >> num_input;
    
    cout << endl;
    
    if (num_input == 1) {
        cout << num_input << " is indeed a palidnrome!" << endl;
    } else {
        cout << num_input << " is not a palidnrome!" << endl;
    }
    
    cout << endl;
    cout << endl;
    cout << endl;
    
    return 0;
    
}

#elif(prog == 2)

// main.cpp
// Reverse Numbers
// Created by ax on 9/28/16.
// Copyright © 2016 COMP130. All rights reserved.

#include<iostream>
#include<string>

using namespace std;

bool check_length(string s1, string s2) {
    
    bool long_enough = 0;
    
    if (!(s1.length() > s2.length()))
    {
        long_enough = 1;
    }
    
    return long_enough;
}

int find_first_position(string s1, string s2) {
    
    char first_char_s1 = s1.at(0);
    int return_val = -1;
    string check_match_seqence = "";
    
    cout << "looking for match to letter \"" << first_char_s1 << "\" in second string." << endl;
    
    for (int i = 0; i < s2.length() - s1.length(); i++)
    {
        if (first_char_s1 == s2.at(i)) {
            cout << "Found a first character match at position " << i + 1 << " in the second string." << endl;
            return_val = i;
            
            // run another function to for loop check the next s1 length of s2
            
            cout << "running next checker" << endl;
            
            for (int j = 0; j < s1.length(); j++) {
                cout << "s2.j: " << s2.at(i + j) << endl;
                check_match_seqence += s2.at(i + j);
            }
            
        }
        
    }
    
    cout << "string s1: " << s1 << endl;
    cout << "check match sequence: " << check_match_seqence << endl;
    
    cout << "checking if s1 matches check match sequence... " << endl;
    
    if (s1 == check_match_seqence) {
        cout << "we found a match!" << endl;
    }
    else {
        cout << "boo, no match found!" << endl;
    }
    
    
    return return_val;
    
}

int main() {
    
    string s1 = " ";
    string s2 = " ";
    
    cout << "Enter string 1: ";
    
    getline(cin, s1);
    
    cout << "Enter string 2: ";
    
    getline(cin, s2);
    
    if (check_length(s1, s2) == 0) {
        cout << "First string is longer than the second string, -1" << endl;
    }
    else {
        cout << "We can work with this! ";
        
        cout << find_first_position(s1, s2) << endl;
    }
    
    
    
    return 0;
    
}

#elif(prog == 1)

// main.cpp
// Checksum Calc ISBN13
// Created by ax on 9/28/16.
// Copyright © 2016 COMP130. All rights reserved.

#include<iostream>
#include<string>

using namespace std;

int check_sum(const string& str) {
    
    string working = str;
    int sum_total = 0;
    
    for (int i = 0; i < str.length(); i++)
    {
        
        int char_to_int = str.at(i) - 48;
        
        if (i % 2 == 0)
        {
            sum_total += char_to_int;
        }
        else
        {
            sum_total += char_to_int * 3;
        }
    }
    
    return sum_total;
    
}

int main() {
    
    string s1 = " ";
    
    cout << "Enter a string of numbers: ";
    
    getline(cin, s1);
    
    if (s1.length() == 12) {
        int return_check_sum = check_sum(s1);
        
        int d13_calc = 10 - (return_check_sum) % 10;
        
        if (d13_calc == 10)
            d13_calc = 0;
        
        char d13 = static_cast<char>(d13_calc + 48);
        
        string ISBN13 = s1 += d13;
        
        cout << "ISBN13 is: " << ISBN13 << endl;
    } else {
        cout << s1 << " is an invalid input" << endl;
    }
    

    
    return 0;
    
}

#endif