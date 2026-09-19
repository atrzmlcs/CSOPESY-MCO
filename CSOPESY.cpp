#include <iostream>
#include <string>
#include <cstdlib>

//clear the console screen
void clearScreen() {
    std::system("clear");
}

//print the main menu header
void printHeader() {
    std::cout << "   ____ ____   ___  ____  ___  ______   __\n";
    std::cout << "  / ___/ ___| / _ \\|  _ \\| ____/ ___\\ \\ / /\n";
    std::cout << " | |   \\___ \\| | | | |_) |  _| \\___ \\\\ V / \n";
    std::cout << " | |___ ___) | |_| |  __/| |___ ___) || |  \n";
    std::cout << "  \\____|____/ \\___/|_|   |_____|____/ |_|  \n";
    std::cout << "Hello, Welcome to the CSOPESY command line!\n";
    std::cout << "Type 'exit' to quit, 'clear' to clear the screen\n\n";
    std::cout << "** IMPORTANT: Type 'initialize' to load config and start system **\n\n";
}

int main() {
    std::string command;
    bool isRunning = true;

    //setup
    clearScreen();
    printHeader();

    // command interpreter loop
    while (isRunning) {
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);

        if (command == "exit") {
            isRunning = false;
        } 
        else if (command == "clear") {
            clearScreen();
            printHeader();
        } 
        else if (command == "initialize" || 
                 command == "screen" || 
                 command == "scheduler-start" || 
                 command == "scheduler-stop" || 
                 command == "report-util") {
            std::cout << command << " command recognized. Doing something.\n";
        } 
        else if (!command.empty()) {
            std::cout << command << " is an unrecognized command.\n";
        }
    }

    return 0;
}
