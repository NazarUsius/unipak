//
// Created by user on 21.05.25.
//

#include "commands.h"
#include <iostream>
#include <string>


void InstallPackage(const std::string& package) {
    std::cout << "Installing package: " << package << std::endl;
}

void DeletePackage(const std::string& package) {
    std::cout << "Deleting package: " << package << std::endl;
}

void UpdateAll() {
    std::cout << "Updating all packages" << std::endl;
}

void SearchPackage(const std::string& package) {
    std::cout << "Searching package: " << package << std::endl;
}

int ParseCommand(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "No command specified. Use 'help' for help" << std::endl;
        return 0;
    }

    std::string command = argv[1];

    if (command == "install") {
        if (argc < 3) {
            std::cerr << "Error: 'install' requires package name" << std::endl;
            return 0;
        }
        InstallPackage(argv[2]);
    }

    else if (command == "delete") {
        if (argc < 3) {
            std::cerr << "Error: 'delete' requires package name" << std::endl;
            return 0;
        }
        DeletePackage(argv[2]);
    }

    else if (command == "update") {
        UpdateAll();
    }

    else if (command == "search") {
        if (argc < 3) {
            std::cerr << "Error: 'search' requires package name" << std::endl;
            return 0;
        }
        SearchPackage(argv[2]);
    }


    return 1;


}
