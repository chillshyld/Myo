#include "YawList.h"

// Constructor
YawList::YawList() {
	for (int i = 0; i < 18; i++)
		this->element.push_back(i);
	this->center = 0;
}

// get 4 redian to the left of center
std::vector<int> YawList::getLeftYawList() {
	std::vector<int> returnList;

	int iterator = center+1;
	if (iterator > 17)
		iterator = 0;

	for (int i = 0; i < 4; i++) {
		iterator++;
		if (iterator > 17)
			iterator = 0;
		returnList.push_back(this->element[iterator]);
	}
	return returnList;
}

// get 4 redian to the right of center
std::vector<int> YawList::getRightYawList() {
	std::vector<int> returnList;
	
	int iterator = center-1;
	if (iterator < 0)
		iterator = 17;
	
	for (int i = 0; i < 4; i++) {
		iterator--;
		if (iterator < 0)
			iterator = 17;
		returnList.push_back(this->element[iterator]);
	}
	return returnList;
}
