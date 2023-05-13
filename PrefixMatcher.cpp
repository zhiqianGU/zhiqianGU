#include <algorithm>
#include "PrefixMatcher.h"

int PrefixMatcher::selectRouter(std::string networkAddress) {
    int longest_match = 0;
    int routerNumber = 0;
    for (int i = 0; i < addresses.size(); i++) {
        int min_length = std::min(networkAddress.length(), addresses[i].length());
        int match_length = 0;
        for (int j = 0; j < min_length; j++) {
            if (addresses[i][j] == networkAddress[j]) {
                match_length++;
            }
            else {
                break;
            }
        }
        if (match_length > longest_match) {
            longest_match = match_length;
            routerNumber = i;
        }
    }
    return routerNumber;
}

void PrefixMatcher::insert(std::string address, int routerNumber) {
    addresses.push_back(address);
    numbers.push_back(routerNumber);
}
