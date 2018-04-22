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
	T* operator->() const { 
		return ptr; 
	}
	T& operator* ()const { 
		return *ptr; 
	}
	void swap(scoped_ptr&other){
		if(ptr || other.ptr)
			std::swap(ptr,other.ptr);
	}
	scoped_ptr(T * ptr_){
		ptr=ptr_;	
	}
	T * reset(T * oth){
		delete ptr;
		ptr=oth;
	}
};
    
