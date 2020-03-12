import serial
import time

ser1 = serial.Serial('COM13', 9600)
ser1.timeout = 1

while True:
    i = input("input(on/off): ").strip()
    if i =='done':
        print('finished')
        break
    ser1.write(i.encode())
    time.sleep(0.5)
    #print(ser1.readline().decode('ascii'))

ser1.close()