#include "section_schema.h"

namespace inicpp
{
	section_schema::section_schema()
	{
		throw not_implemented_exception();
	}

	section_schema::section_schema(const section_schema &source)
	{
		throw not_implemented_exception();
	}
	
	section_schema& section_schema::operator=(const section_schema &source)
	{
		throw not_implemented_exception();
	}

	section_schema::section_schema(section_schema &&source)
	{
		throw not_implemented_exception();
	}

	section_schema& section_schema::operator=(section_schema &&source)
	{
		throw not_implemented_exception();
	}

	void section_schema::add_option(std::string option_name)
	{
		throw not_implemented_exception();
	}
	
	void section_schema::add_option(const &option_schema opt)
	{
		throw not_implemented_exception();
	}

	std::ostream& section_schema::operator<<(std::ostream& os)
	{
		throw not_implemented_exception();
	}
}
