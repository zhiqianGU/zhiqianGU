#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
	if (numCrates >= 2 && numCrates <= 10000 && loadSize >= 1 && loadSize <= numCrates - 1) {
		return numTrucks(numCrates,loadSize);
	}
	return -1;
}
int Truckloads::TrueNumTrucks(int numCrates, int loadSize) {
	if (numCrates <0 ||loadSize <= 0) 
	{ return -1; }
	if (loadSize >= numCrates) 
	{ return 1; }
	int ab = numCrates /2; 
	int bc = numCrates - ab; 
	return numTrucks(ab, loadSize) + numTrucks(bc,loadSize);
}
