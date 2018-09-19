#pragma once
#ifndef EXC_MEAN_H
#define EXC_MEAN_H
#include <stdexcept>
class bad_hmean :public std::logic_error
{
public:
	bad_hmean() :logic_error("Bad arguments to hmean()!\n") {}
//	virtual const char* what() { return "Bad arguments to hmean()!\n"; }

};
class bad_gmean :public std::logic_error
{
public:
	bad_gmean() :logic_error("Bad argument to gmean()!\n") {}
//	virtual const char* what() { return "Bad argument to gmean()!\n"; }
};
#endif // !EXC_MEAN+H
