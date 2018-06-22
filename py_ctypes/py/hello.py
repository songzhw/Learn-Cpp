from ctypes import *

lib = cdll.LoadLibrary("libhello.fst")
lib.sayHello("szw")  #=> Hello szw!