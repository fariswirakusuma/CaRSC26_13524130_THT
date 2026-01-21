#include <iostream>
#include <thread>
#include <string>
#include <chrono>
#include <fstream>
#include <mutex>

using namespace std;
mutex mtx;
bool parsing = false;
void task1(){
    while(true){ {
        lock_guard<mutex> lock(mtx);
        if (!parsing) break;  
    }
    cout<<"Receiving video frame..."<<endl;
    this_thread::sleep_for(chrono::seconds(2));
    }
}

void task2(const string& filename){
    {
        lock_guard<mutex> lock(mtx);
        parsing = true;
    }
    ifstream file(filename);
    string line; 
    if (!file.is_open()){
        cerr << "cannot open file";
        parsing = false;
        lock_guard<mutex>lock(mtx);
        return;
    }
    while(getline(file,line)){
        cout << line <<endl;
        this_thread::sleep_for(chrono::seconds(3));
        {
            lock_guard<mutex> lock(mtx);
            parsing=true;
        }
    }
}   

int main(){
    string path = "telemetry.txt";
    thread t2(task2,path);
    this_thread::sleep_for(chrono::milliseconds(1)); 
    thread t1(task1);
    t2.join();
    t1.join();
    return 0;
}