from sys import argv
import os

script = argv
name = str(script[0])
print (name)

for i in range(0,10):
  directorio = "virusDeGorraRosada"+str(i)
  os.system("md"+" "+directorio)
  os.system("copy "+" "+name+" "+directorio)
