# arduino-python-serial-communication
Using the pyserial library in python to communicate with the arduino board through serial communication. 


# ARDUINO - serial_led_blink.ino
The serial_led_blink.ino code has to be uploaded into the arduino board which would basically turn the LED at pin13 ON or OFF depending on the input received through serial communication.
 -> If input is "on" , then turn LED at pin 13 to HIGH
 -> If input is "off" , then turn LED at pin 13 to LOW
 
 The baud rate has to be set at 9600.

# PYTHON - serial_data_send.py
Using the pyserial library of python to send data to arduino over serial communication. 
  The variable COM_PORT has to replaced with the COM PORT no through which the arduino board is connected to the PC.
  It can found at the Arduino IDE. 
  
  This script will take the input from the user. 
  -> If the  input is "on", it will send data to turn the LED at pin13 to HIGH.
  -> If the  input is "off", it will send data to turn the LED at pin13 to LOW.
  -> If the user enters "done", the program will terminate and end the serial communication with the arduino board.
