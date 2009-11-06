import serial
import time

ser = serial.Serial( '/dev/ttyUSB0', '115200' )

t0 = time.time()

data = ser.read(50000)

print time.time() - t0

fil = open( 'mic.dat', 'w' )
fil.write( data )
fil.close()
