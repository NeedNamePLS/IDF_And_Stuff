#Lab2D

import socket

server = input("\nEnter a port number: ")
server = socket.getservbyport(int(server))
print("Server Name: ", server,"\n")