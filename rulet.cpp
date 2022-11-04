#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main(){
    int minNumber = 1, maxNumber = 6;
    int possibility,chamberNumber;
    int del = remove("delete.txt");
    srand(time(0));
    possibility = rand() % (maxNumber - minNumber + 1 ) + minNumber;
    chamberNumber = rand() % (maxNumber - minNumber + 1 ) + minNumber;
    cout << "First Number: " <<possibility<<endl<<"Second Number: " << chamberNumber<< endl;

    if (possibility == chamberNumber){
        cout << "You're Dead " <<possibility<< endl;
        //Burası şart sağlanmasa dahi mutlaka bir kere çalışıyor.
        //remove("C:\\Users\\alice\\Desktop\\cppRoulette\\delete.txt"); 
        
    }
    else{
    cout << possibility << endl;
    }
    
 




    return 0;
}
