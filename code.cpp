//
//  main.cpp
//  AppLabFourteen
//
//  Created by Павел Качан on 24.05.17.
//  Copyright © 2017 Павел Качан. All rights reserved.
//
// №1
// №2
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;


int factorial(int n) { // Done
    
    if (n < 0) return 0;
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}


int main(int argc, const char * argv[]) {
    
    // Don't touch it!
    const int N = 10;
    string word[N];
    int n = 0;
    // Don't touch it!

    // Entering
    ifstream file;
    file.open("/Users/pavelkacan/Documents/Xcode/AppLabFourteen/AppLabFourteen");
    while (file >> word[n]) {
        n++;
    }
    
    //Permutation
    sort(word, word + N);
    do {
        cout << word << endl;
    } while (next_permutation(word, word + N));
    
    for (int i = 0; i < N; i++) cout << word[i] << ' '; cout << endl;
    
    
    return 0;
}
