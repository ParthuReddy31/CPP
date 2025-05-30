#include <iostream>
#include<iostream>
#include<map>
#include<thread>
#include<chrono>


 using namespace std;

void RefreshForecast(map <string,int>& climate ){
    while(true){
        for(auto& item : climate){
            item.second++;
            cout << item.first << " - " << item.second << endl ;
        }
        this_thread::sleep_for(2000ms);
    }
}

int main (){
    map < string , int> weather = { {"NewYork", 16} ,{"London", 14}, {"Canada", 3},{"India", 24}};

    
    thread t1(RefreshForecast, std::ref(weather));
    t1.join();
    
}

// #include <iostream>
// #include <map>
// #include <thread>
// #include <chrono>

// using namespace std;

// void RefreshForecast(map<string, int>& climate) {
//     while (true) {
//         for (auto& item : climate) {
//             item.second++;
//             cout << item.first << " - " << item.second << endl;
//         }
//         this_thread::sleep_for(2000ms);
//     }
// }

// int main() {
//     map<string, int> weather = {
//         {"NewYork", 16},
//         {"London", 14},
//         {"Canada", 3},
//         {"India", 24}
//     };

//     thread t1(RefreshForecast, std::ref(weather));
//     t1.join();  // Wait for thread to finish (infinite in this case)
// }