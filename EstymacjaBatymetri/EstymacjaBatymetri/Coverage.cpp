#include "Coverage.h"

Coverage::Coverage(string type, string* range, string contractor, string orderer) {
	this->type = type;
	this->range = range;
	this->contractor = contractor;
	this->orderer = orderer;
}
