#include "hello/hello.h"

namespace hello
{
	void greet(std::stringstream & ss)
	{
		ss << "Hello world!";
	}
}