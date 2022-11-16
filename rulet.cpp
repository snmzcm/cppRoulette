#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <filesystem>
//include filesystem and replace remove() with filesystem libs remove function

using namespace std;
namespace fs = std::filesystem;

int main(){
    int minNumber = 1, maxNumber = 6;
    int possibility,chamberNumber;
    srand(time(0));
    possibility = rand() % (maxNumber - minNumber + 1 ) + minNumber;
    chamberNumber = rand() % (maxNumber - minNumber + 1 ) + minNumber;
    cout << "First Number: " <<possibility<<endl<<"Second Number: " << chamberNumber<< endl;

    if (possibility == chamberNumber){
        std::filesystem::remove("/mnt/c/users/alice/desktop/cpproulette/delete.txt"); 
        cout << "You're Dead " <<possibility<< endl;
        
    }
    // else{
    // cout << possibility << endl;
    // }
    
    // g++ -std=c++17 rulet.cpp -o output
 




    return 0;
}
