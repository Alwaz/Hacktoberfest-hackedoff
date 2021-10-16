// Java Strings
Strings are used for storing text.

A String variable contains a collection of characters surrounded by double quotes:



String greeting = "Hello";

String txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
System.out.println("The length of the txt string is: " + txt.length());

String txt = "Hello World";
System.out.println(txt.toUpperCase());   // Outputs "HELLO WORLD"
System.out.println(txt.toLowerCase());   // Outputs "hello world"


String txt = "Please locate where 'locate' occurs!";
System.out.println(txt.indexOf("locate")); // Outputs 7


String Concatenation
The + operator can be used between strings to combine them. This is called concatenation:

Example
String firstName = "John";
String lastName = "Doe";
System.out.println(firstName + " " + lastName);


String firstName = "John ";
String lastName = "Doe";
System.out.println(firstName.concat(lastName));



Special Characters
Because strings must be written within quotes, Java will misunderstand this string, and generate an error:

String txt = "We are the so-called "Vikings" from the north.";


String txt = "We are the so-called \"Vikings\" from the north.";


Code	Result
\n	    New Line	
\r	    Carriage Return	
\t	    Tab	
\b	    Backspace	
\f	    Form Feed