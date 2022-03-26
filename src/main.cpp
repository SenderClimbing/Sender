#include <iostream>
#include <string>
#include <fstream>

int main(){
    bool askQuit = false;
    std::string climbTypeString;
    std::string line;
    int climbTypeInt;
    std::string climb;
    std::fstream file;

    int highestBoulder = 0;

    file.open("data/boulders.txt", std::fstream::app);
    std::cout << "Welcome to Sender!" << std::endl;
    std::cout << "Please enter your climbs one by one using the V scale." << std::endl << "When you are finished entering the data, type 'Q' and the program will analyze the new data." << std::endl;

    while(!askQuit){
        std::cin >> climb;
        if(climb == "Q"){
            askQuit = true;
        } else if(climb != "Q"){
            file << climb << std::endl;
            askQuit = false;
        }
    }

    while(getline (file, line)){
        if(std::stoi(line) > highestBoulder){
            std::cout << "Wow! You sent your first v" << line << std::endl;
            highestBoulder = std::stoi(line);
        }
    }

    file.close();
    return 0;
}