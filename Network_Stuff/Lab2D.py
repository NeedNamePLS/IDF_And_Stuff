#Lab2D

import socket

domain_name = input("\nEnter Domain Name: ")
IP_Address = socket.gethostbyname(domain_name)
Test = socket.gethostbyaddr(IP_Address)
print("IP Address:", IP_Address)
print("Name Info:", Test)
print("\n")