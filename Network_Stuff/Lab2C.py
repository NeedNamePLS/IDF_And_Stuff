import socket

host_name = socket.gethostname()
IP_Address = socket.gethostbyname(host_name)
print("Host Name:", host_name)
print("IP Address:", IP_Address)