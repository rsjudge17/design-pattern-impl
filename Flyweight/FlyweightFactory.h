// FlyweightFactory.h

#ifndef __FLYWEIGHTFACTORY_H__
#define __FLYWEIGHTFACTORY_H__

#include "Flyweight.h"
#include <string>
#include <vector>
using namespace std;

class FlyweightFactory
{
public:
	FlyweightFactory();
	~FlyweightFactory();

	Flyweight *GetFlyweight(const string &key);

private:
	vector<Flyweight*> _fly;
};

#endif