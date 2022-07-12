# -*- coding: utf-8 -*-
"""
programa para leer piezoelectricos de arduino, serial
modificar el COM% line 16 según convenga
si se mantiene presionado un piezoelectrico, la tecla solo
se presiona una vez.
shift + x para cerrar el programa
"""
import serial
import keyboard
import time
ser = 0
sensores = ['0','0','0','0','0']
sensoresa = ['0','0','0','0','0']

ser = serial.Serial('COM5',9600)

while keyboard.is_pressed('shift+x') == False:
    time.sleep(0.1)
    cc = str(ser.readline().decode('utf-8'))
    cc = str(ser.readline().decode('utf-8'))
    sensoresa = sensores
    sensores = cc.split(',')
    
    if int(sensores[0]) == 1:
        print("a")
        if int(sensoresa[0]) == 0:
            keyboard.press_and_release("a")
        
    elif int(sensores[1]) == 1:
        print("b")
        if int(sensoresa[1]) == 0:
            keyboard.press_and_release("b")
        
    elif int(sensores[2]) == 1:
        print("c")
        if int(sensoresa[2]) == 0:
            keyboard.press_and_release("c")
    
    elif int(sensores[3]) == 1:
        print("d")
        if int(sensoresa[3]) == 0:
            keyboard.press_and_release("d")
    
    elif int(sensores[4]) == 1:
        print("e")
        if int(sensoresa[4]) == 0:
            keyboard.press_and_release("e")
        
ser.close()