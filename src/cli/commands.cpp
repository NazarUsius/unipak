//
// Created by user on 21.05.25.
//

#include "commands.h"
#include <iostream>
#include <string>
#include "package.h"
#include "sstream"

std::string osAllowed() {

    std::map<std::string, std::string> osInfo;
    std::map<std::string, std::string> osTools;
    std::vector<std::string> allowedOs;
    std::ostringstream oss;

    osInfo = parseOsRelease();
    allowedOs = isOsAllowed(osInfo["ID"]);


    if (allowedOs.empty()) {
        allowedOs = isOsAllowed(osInfo["ID_LIKE"]);
        if (allowedOs.empty()) {
            return "OS release not allowed";
        }
    }

    for (size_t i = 0; i < allowedOs.size(); ++i) {
        oss << allowedOs[i];
        if (i != allowedOs.size() - 1) oss << ", ";
    }

    return oss.str();

}


int ParseCommand(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "No command specified. Use 'help' for help" << std::endl;
        return 0;
    }

    std::string command = argv[1];



    if (command == "search") {
        if (argc < 3) {
            std::cerr << "Error: 'search' requires package name" << std::endl;
            return 0;
        }
        std::cout << osAllowed() << std::endl;

    }


    return 1;


}
