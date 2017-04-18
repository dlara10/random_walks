import numpy as num
import matplotlib.pyplot as plt

data=np.loadtxt("random_walks.txt")
y = data[:,0]
x = num.linspace(0, num.len(data), 1)
plt.hist(y,x,(0,100))
plt.show()
plt.savefig("rand.png")
