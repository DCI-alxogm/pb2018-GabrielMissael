import matplotlib.pyplot as plt
import matplotlib.image as mpimg
import numpy as np

for i in range(len(sys.argv)):
    file=sys.argv[i]
    plt.clf()
    data_img=np.loadtxt(file)
    plt.imshow(data_img)
    plt.colorbar()
    plt.savefig(file+'.png')
