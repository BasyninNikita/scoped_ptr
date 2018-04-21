#include <iostream>
#include <utility>
template <typename T>
class scoped_ptr{
private:
    T * ptr;
public:
    scoped_ptr () {
		ptr = nullptr;
	}
	~scoped_ptr () {
		delete ptr;
	}
};
    
