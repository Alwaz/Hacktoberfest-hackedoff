from cv2 import cv2

cap=cv2.VideoCapture(0)   # 0 argument for webcam
                        # Default colored image is captured as BGR...

while True:
    ret,frame=cap.read()
    print(cap.get(cv2.CAP_PROP_FRAME_WIDTH))
    print(cap.get(cv2.CAP_PROP_FRAME_HEIGHT))
    if ret==False:        # return gives 1 if all fine, else 0...
        print("Something went wrong!")
        continue
    # cv2.imshow("frame",frame)
    gray=cv2.cvtColor(frame,cv2.COLOR_RGB2GRAY)
    cv2.imshow("Gray frame",gray)
    key_press=cv2.waitKey(1)&0xff
    if key_press==ord('q') or key_press==ord('Q'):
        break
cap.release()
cv2.destroyAllWindows()

