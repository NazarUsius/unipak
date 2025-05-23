//
// Created by user on 21.05.25.
//

#pragma once
#include <string>
#include <map>
#include <vector>

int ParseCommand(int argc, char* argv[]);
bool DownloadFile(const std::string& url, const std::string& output);
std::map<std::string, std::string> parseOsRelease();
std::vector<std::string> isOsAllowed(std::string osId);
