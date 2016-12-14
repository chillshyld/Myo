#pragma once
#ifndef YAWLIST_H
#define YAWLIST_H
#endif // !1

#include <vector>

//This class 
class YawList {
public:
	YawList();
	void setCenter(int center) { this->center = center; }
	int getCenter() { return center; }
	std::vector<int> getLeftYawList();
	std::vector<int> getRightYawList();
private:
	std::vector<int> element;
	int center;
};