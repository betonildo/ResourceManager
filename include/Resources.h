#ifndef RESOURCES_H
#define RESOURCES_H

#include <Definitions.h>
#include <Memallocator.h>

#define ResourcesMem Resources<Memallocator>

template<class M>
class Resources {

private:
	M allocator;

public:

	void setBasePath(const std::string& path);

	template<class T>
	inline void store(const T & asset)
	{
		asset.getBytes();
	}

	template<class T>
	inline T & load(const std::string & path)
	{
		// TODO: insert return statement here
		return T();
	}

	template<class T>
	inline T& load(const unsigned int rGUID)
	{
		// TODO: insert return statement here
		return T();
	}
};

#endif // !RESOURCES_H