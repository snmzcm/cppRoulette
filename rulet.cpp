#include <iostream>
#include <cstdlib>
#include <stdio.h>
//include filesystem and replace remove() with filesystem libs remove function

using namespace std;

int main(){
    int minNumber = 1, maxNumber = 6;
    int possibility,chamberNumber;
    srand(time(0));
    possibility = rand() % (maxNumber - minNumber + 1 ) + minNumber;
    chamberNumber = rand() % (maxNumber - minNumber + 1 ) + minNumber;
    cout << "First Number: " <<possibility<<endl<<"Second Number: " << chamberNumber<< endl;

    if (possibility == chamberNumber){
        remove("C:\\Users\\alice\\Desktop\\cppRoulette\\delete.txt"); 
        cout << "You're Dead " <<possibility<< endl;
        
    }
    // else{
    // cout << possibility << endl;
    // }
    
 




    return 0;
}
