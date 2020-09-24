# Arduino-Morse-Code
Morse code sound and letter view via 7 segment display via serial Connection (arduino sketch plus Net core console app to communicate).  with Kicad project for a Arduino shield (UNO R3)


This project is a simple morse code sounded with and 7 -segment display to show the letter or number being sounded out using basic components.  the trimpot acts as a basic volume sontrol.

As part on this project I have used:

1 x 220ohm trimpot
8 x 1K resistors
1 x buzzer
1 x 5101AS 7 -segment displat
1 x Ardinuo uno R3

I've Include a Kicad project in the repo with a design for a shield which will require header pins as well, but makes the design more solid.

the .net core app include allows for communication over the serial port without the Arduino IDE.  It should autodetect a single arduino connected to the computer.
