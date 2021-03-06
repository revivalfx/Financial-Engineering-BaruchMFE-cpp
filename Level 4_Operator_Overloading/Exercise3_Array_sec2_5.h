// An Array class

#ifndef ARRAY_H
#define ARRAY_H

#include "Point.hpp"

class Array{

private:
	
	Point* m_data;				 // Data member for a dynamic C array of Point objects
	int m_size;					 // Data member for the size of the array.


public:
	Array () ;									// Default constructor
	Array(int a_size) ;							// Constructor with one argument
	Array(const Array& cp_arr);					// Copy constructor
	~Array();									// Destructor

	
	
	int Size () const;							// Returns the size of the array.
	void SetElement(Point* P, int index) ;		// Set elements in the array.
	Point& GetElement(int index) const ;        // Get elements from the array.
	

	Array& operator = (const Array& source);	//Assignment operator
	
	Point& operator [] (int index);				// [] operator can be used for both reading and writing.
	const Point& operator [] (int index) const; // const [] operator can be used for reading const Point objects.
	
};

#endif