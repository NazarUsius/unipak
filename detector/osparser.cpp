//
// Created by user on 23.05.25.
//

#include "osparser.h"
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <map>
#include <vector>

std::map<std::string, std::string> parseOsRelease() {
    std::ifstream file("/etc/os-release");
    std::string line;
    std::map<std::string, std::string> osInfo;

    while (std::getline(file, line)) {
        size_t pos = line.find('=');
        if (pos != std::string::npos) {
            std::string key = line.substr(0, pos);
            std::string value = line.substr(pos + 1);
            if (value.front() == '"' && value.back() == '"') {
                value = value.substr(1, value.length() - 2);
            }
            osInfo[key] = value;
        }
    }
    return osInfo;
}

std::map<std::string, std::vector<std::string>> allowedOs = {
    {"arch", {"AUR", "pacman"}},
    {"debian", {"apt"}},
    {"fedora", {"dnf"}},
    {"None", {}}
};

std::vector<std::string> isOsAllowed(std::string osId) {

    auto it = allowedOs.find(osId);
    if (it != allowedOs.end()) {
        return allowedOs[osId];
    } else {
        return allowedOs["None"];
    }

}

