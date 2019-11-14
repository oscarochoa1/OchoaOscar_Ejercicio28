import os
import numpy as np
import matplotlib.pyplot as plt



data = np.loadtxt("grafica.dat")
plt.plot
plt.plot(data[20:40,0],data[:20,0])
plt.plot( data[60:80,0], data[40:60,0])
plt.xlabel('X')
plt.ylabel('Y')

plt.savefig("grafica.png")