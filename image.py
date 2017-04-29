import sys
from PIL import Image
import numpy

numpy.set_printoptions(threshold=numpy.nan)

im = Image.open(sys.argv[1])
arr = numpy.array(im)
#print(arr)
print(arr[len(arr)-1][len(arr[len(arr)-1])-1][0])
