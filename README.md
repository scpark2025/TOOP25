# TOOP25
Today we finish our coverage of OOP by implementing classes in Platform IO and on our robot! We will also go over
how to use classes when working with the Pololu robot.
BEFORE CLASS
Review the references and today's slides.
IN CLASS
See Slides
TOOP 25 IN-CLASS EXERCISE
For this in-class exercise, let’s put it all together!
1. Create a new project in platform IO named TOOP25.
2. In main.cpp:
2.1. Create the OLED object.
2.2. Declare a class named exampleRobot
2.3. Create a private String variable named line1
2.4. In the constructor, set the OLED layout.
2.5. Create a function called setline() that does not return anything and takes one String argument. The argument
should be used to set the contents of line1.
2.6. Create a function called dispLine() that does not return anything or take any arguments. This function should
use the Pololu OLED functions to display line1 on the screen.
2.7. Create an instance of exampleRobot
3. In setup()
3.1. Set line1 to “Go Bears!”
4. In loop()
4.1. Call dispLine() and use delay() as needed.
5. Run the program and verify it works.
Note: Pololu uses a “String” with a capital “S” for the string data type.
You may leave once you have:
• Synchronized your work with GitHub
