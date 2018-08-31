##Exercise 2.10
Which type of variable can hold the largest range of values?  

Long double.

##Exercise 2.11
Which type of variable can store values to the greatest precision?  

Long double.

##Exercise 2.12
Are there any problems possible when assigning a *float* or a *double* to a *double* or a *long double*?

No

##Exercise 2.13
What could go wrong when assigning a *long double* to a *double*?

A loss of precision may occur. It should be defined by the implementation.   
Or the destination will not be able to hold the value and an undefined behaviour will happen.

##Exercise 2.14
What predictions can you make about a program showing 'undefined behaviour'?

A bad assignment may have been implemented.   
There is no way to know what would happen in case of an undefined behaviour.  
It is the role of the programmer not to exhibit undefined behavior.  
