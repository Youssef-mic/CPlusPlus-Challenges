#include <iostream> 
#include <chrono>
using namespace std::chrono;
int main(){
    auto start = high_resolution_clock::now();
    int avg = 0;
    int evenNum = 0;
    for (int i = 1; i < 21; i++){
        if (i % 2 == 0){
            avg += i;
            evenNum++;
        }
    }

    avg /= evenNum;
    std::cout << avg << "\n";    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;
    return 0;
}