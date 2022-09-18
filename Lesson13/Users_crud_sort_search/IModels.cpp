#include <string>
#pragma once // It's important!!! Because this class will be double in another classes

using namespace std;
// abstract class
class IModels {
public:
	// Abstract methods
	virtual string toString() = 0;
};