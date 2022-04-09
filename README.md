# Arduino-Morse-Code
Morse code sound and letter view via 7 segment display via BlueTooth (arduino sketch plus Net core console app to communicate).  with Kicad project for a Arduino shield (UNO R3) - inculding Bluetooth connectivity and power pins on the PCB (going to Vin)


This project is a simple morse code sound with and 7-segment display to show the letter or number being sounded out using basic components.  the trimpot acts as a basic volume sontrol.

As part on this project I have used:

1 x 220ohm trimpot
8 x 1K resistors
1 x buzzer
1 x 5101AS 7 -segment display
1 x Ardinuo Uno R3



HC-05 Bluetooth Chip

for testing I powered the Ardinuo with a 9V battery clip although the Barrel Jack and other power solutions should work just as well (shield draws all power form the Arduino)

I've Included a Kicad project in the repo with a design for a shield which will require header pins as well, but makes the design more solid.

the .net core app include allows for communication over the serial port without the Arduino IDE.  It should autodetect a single arduino connected to the computer.

a Bluetooth serial App terminal will allow sending of data, I've used : Blue Serial Terminal from the Windows Store  and Ardiuno BLueconnect on Android to send commands.

When fully assembled the Bluetooth modules prevents programming so please remove the sheld if uploading code.

If Bluetooth or external power isn't required the parts don't need adding for the design to work.
