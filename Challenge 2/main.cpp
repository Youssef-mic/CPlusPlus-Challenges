#include <iostream> 
#include <chrono>
using namespace std::chrono;
int main(){
    auto start = high_resolution_clock::now();
    int arr[][3]{
        {2, 1, 3},
        {6, 4, 5},
        {7, 8, 9}
    };
    int tempNum;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            if (arr[i][j] > arr[i][j + 1]){
                tempNum = arr[i][j];
                arr[i][j] = arr[i][j + 1];
                arr[i][j + 1] = tempNum;                
            }
            
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            std::cout << arr[i][j] << "\n";
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    std::cout << "\nTime taken by function: " << duration.count() << " milliseconds" << std::endl;
    return 0;
}