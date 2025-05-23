#ifndef OSPARSER_H
#define OSPARSER_H

#include <string>
#include <map>
#include <vector>

std::map<std::string, std::string> parseOsRelease();
std::vector<std::string> isOsAllowed(std::string osId);

#endif // OSPARSER_H