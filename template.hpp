#pragma once

#include <iostream>
#include <string>

class $CLASSNAME
{
private:

public:
	$CLASSNAME();
	~$CLASSNAME();

	$CLASSNAME(const $CLASSNAME& src);

	$CLASSNAME&	operator=(const $CLASSNAME& rhs);
};

std::ostream&	operator<<(std::ostream& os, const $CLASSNAME& src);
