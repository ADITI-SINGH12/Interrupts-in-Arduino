# Interrupts-in-Arduino
Here this is a software interrupt of Timer. 
what is Timer ? Timer is a kind of interrupt. It is a simple clock which can measure time interval of an event. arduino uno has 16MHz of clock and takes 62nanoseconds to make a single count.
A times uses counter which count at certain speed depending upon the clock frequency.
In Arduino UNO there are three timers used for different function.
Timer0: It is a 8-Bit timer and used in timer function such as delay(), millis() , and analogWrite().
Timer1: It is a 16 bit timer and used in servo library, and we will use this time for software interuupt.
Timer2: It is an 8-bit Timer and used in tone() function.

We are using here Timer1 for this to intialise the interrupt that every cycle when the timer's work is complete. First timers1 is initialised for a definite time and after running 
and after running for the defined time, timer flag is automatically set high and then it will jump to a service routine to perform a specified task.
Syntax-> Timer1.attachInterrupt(ISR)
ISR - it is afunction that is called when an external interrupt is done.
