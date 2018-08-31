##Exercise 2.1
Why are trigraphs used ?  

Used because some alphabet don't have all the characters required by the C language.
Allows to replace 3 characters from ISO646 to a character necessary to the C language.
For instance: ??' means ^

##Exercise 2.2
When would you except to find them in use, and when not?  

Used when: context of highly restricted environments.  
NOT used when: wanting to make a program highly portable.  

##Exercise 2.3
When is a newline not equivalent to a space or a tab?  

On preprocessor command lines, because they have a line by line structure.

##Exercise 2.4
When would you see the sequence 'backslash newline' in use?

On preprocessor command lines, because it relies on single line command.
It is not useful outside of preprocessor because a convenient 'newline' always exists.

##Exercise 2.5
What happens when two strings are put side by side?  

They form a single string. (the 'concatenation' of the two strings)


##Exercise 2.6
Why can't one put one piece of comment inside another one?  

Because the closing of the comment inside would in fact close the first comment.  
(There is no management of nesting)

##Exercise 2.7
What are the longest names that may safely be used for variables?

31 characters for identifiers.
6 characters for external identifiers

##Exercise 2.8
What is a declaration?  

A declaration introduce the name and the type of something.

##Exercise 2.9
What is a definition?

A definition introduce does the same as a declaration AND allocates storage.