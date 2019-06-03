#Lab2A Client

from socket import *

s = socket(AF_INET,SOCK_STREAM)
s.connect(("localhost",14599))

while 1:
    s.send(raw_input("USER:>"))
    resp = s.recv(1024)

    # if int(resp) 
    #     test = htonl(resp)

    print(resp)
    if resp == '':
        break

s.close()