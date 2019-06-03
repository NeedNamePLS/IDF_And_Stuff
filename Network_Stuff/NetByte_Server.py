#Lab2A Server

from socket import *
# import socket

s = socket(AF_INET, SOCK_STREAM)
s.bind(("",14599))
s.listen(5)
c,a = s.accept()

while 1:
    data = c.recv(1024)
    
    if int(data) >= 256:
        test = ntohl(int(data))
    elif int(data) < 256:
        test = ntohs(int(data))

    print(test)
    c.send("Received")
    if data == "END":
        break
    
c.close()