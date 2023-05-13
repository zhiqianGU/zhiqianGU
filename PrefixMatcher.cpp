#include"PrefixMatcher.h"
int PrefixMatcher::selectRouter(std::string networkAddress) {
	int longest_match = 0;
	int routerNumber = 0;
	for (int i =0 ; i < addresses.size(); i++) {
		int min = min(networkAddress.length(), addresses.size());
		int match_length =0;
		for (int j = 0; j < min; j++)
		{
			if (addresses[i][j] == networkAddress[j]) {
				match_length++;
			}
			else {
				i = min;
			}
		}
		if (match_length > longest_match) {
			longest_match = match_length;
			routerNumber = i;
		}
	}
	return routerNumber;
}
void PrefixMatcher::insert(std::string address, int routerNumber)
{
	addresses.add(address);
	numbers.add(routerNumber);
}
