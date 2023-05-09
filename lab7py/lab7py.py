import cv2
import numpy as np

myImage = cv2.imread("RGBcolor.jpg", 1)
print(myImage)

cv2.imshow("Colorful Image", myImage)
cv2.waitKey(0)

b,g,r = cv2.split(myImage)

cv2.imshow("Model Blue Image", b)
cv2.waitKey(0)

cv2.imshow("Model Blue Image", g)
cv2.waitKey(0)

cv2.imshow("Model Blue Image", r)
cv2.waitKey(0)

myImage[:,:,1] = np.zeros([myImage.shape[0], myImage.shape[1]])
cv2.imshow("Deneme", myImage)
cv2.waitKey(0)


