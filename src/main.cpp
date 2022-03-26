// Include libraries to read files, make strings, and default cpp files
#include <iostream>
#include <string>
#include <fstream>

// Main method
int main(){
    // Define all our variables that will be used later in the program.
    bool askQuit = false;
    int climbTypeInt;
    int highestBoulder = 0;

    std::string line;
    std::string climb;
    std::fstream file;
    std::fstream highestBoulderFile ("data/highestBoulder.txt");
    
    if (highestBoulderFile.is_open()){
        while (getline(highestBoulderFile,line)){
            highestBoulder = stoi(line);
        }
        highestBoulderFile.close();
    }


    int count = 0;
    // Open our file that stores all completed climbs.
    file.open("data/boulders.txt", std::fstream::app);

    // Print out or welcome message, and give instructions on how to use the program.
    std::cout << "Welcome to Sender!" << std::endl;
    std::cout << "Please enter your climbs one by one using the V scale." << std::endl << "When you are finished entering the data, type 'Q' and the program will analyze the new data." << std::endl;

    // This loop will run until 'Q' is typed. This is also the loop that takes in all of our data, and writes it into the file.
    while(!askQuit){
        std::cin >> climb;
        if(climb == "Q"){
            askQuit = true;
        } else if(climb != "Q"){
            file << climb << std::endl;
            askQuit = false;
        }
    }
    // Close our file, since its in append mode.
    file.close();

    // Reopen the file, without append mode. So we can read it.
    file.open("data/boulders.txt");

    // Read through our Database, and check if any of the grades are higher than highestBoulder
    if (file.is_open()){
        // Loop through all of the lines of boulders.txt(all climbs)
        while (getline(file,line)){
            // Check if any of the climbs are greater than your highest level of a climb
            if(std::stoi(line) > highestBoulder){
                // Open our HighestBoulder file, which contains the highest level of Boulder that the user has achived
                highestBoulderFile.open("data/highestBoulder.txt", std::ofstream::out | std::ofstream::trunc);
                // Tell the user! They did it!
                std::cout << "Wow! You did your first v" << line << " Keep it up!" << std::endl;
                highestBoulderFile << line;
                highestBoulder = std::stoi(line);
                highestBoulderFile.close();
            }
        }
        file.close();
        highestBoulderFile.close();
    }

    return 0;
}