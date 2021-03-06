# CST136SRS01
Mayday Mamate

Grading Name: 

Solution Name: CST136SRS01  
Project Name(s): Exceptional

Notes: Describe the reason(s) for your default ctor technique in the README.md.
		- I used the max value of int for the default upper and lower bounds values in my default constructor. If we use 0, then user can't set a value until bounds are changed. 
		Describe the reason you made RangeInt a struct or class. (see the cppguidelines for details.)
		- I made RangeInt a class because it is my preference. From what I learned they vary only slightyly from eachother. I had alot of functions so a class seemed more appropriate by convention.

Issues: 
		

---

Purpose:

- Pratice using various C++ error handling mechanisms.
- Learn to use C++ exceptions.
- Understand the exception class hierarchy and how to extend it. 
- Learn about ctor options. 

Create an integer range class or struct named "RangeInt".  

Create a ctor that accepts: \[lower bound, upper bound). 
Create a default ctor is unbound on both upper and lower values.  

Create the default ctor by delegating, default parameters, or default generation.  

Create a constexpr member for kUnboundLower and kUnboundUpper.  

Create lower bound and upper bound setters and getters. Handle narrowing conversions (float, double, long, unsigned, ...). Allow std::string and c-strings for setters and handle non-valid strings.  

Create setter for the value and throw an exception if the value exceeds the bounds. Ensure a strong exception guarantee.  

Create a getter for the value.  

Devise a strategy for dealing with changing bounds when the value is outside the bounds.  

Write test code in main the exercises your code. Be sure to use a try/catch block and std::exception::what() in your testing code.  

Don't forget to use noexcept and const when and where applicable.  

Describe the reason(s) for your default ctor technique in the README.md.  

Describe the reason you made RangeInt a struct or class. (see the cppguidelines for details.)
