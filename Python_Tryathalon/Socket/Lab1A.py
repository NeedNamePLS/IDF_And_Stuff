#Lab 1

from socket import *

s = socket(AF_INET, SOCK_STREAM)
s.bind(("",14599))
s.listen
c,a = s.accept()

while 1:
    data = c.recv(1024)
    print(data)
    c.send("Received")
    if data == "END"
        break
    
c.close()