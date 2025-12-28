#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(){

    int animationTimer = 6;
    while (animationTimer != 0){
        cout << "Feliz Navidad!!!";
        this_thread::sleep_for(chrono::milliseconds(800));
        system("clear");
        this_thread::sleep_for(chrono::milliseconds(200));
        cout << flush;
        animationTimer--;
    }
    return 0;
}