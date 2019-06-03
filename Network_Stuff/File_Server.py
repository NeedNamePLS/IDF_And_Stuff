#File Client Transfer

import socket                   # Import socket module

port = 60000                    # Reserve a port for your service.
s = socket.socket()             # Create a socket object
host = socket.gethostname()     # Get local machine name
s.bind((host, port))            # Bind to the port
s.listen(5)                     # 

c,a = s.accept()

filename = "helpmepls.txt"
f = open(filename, 'r')
l = f.read(1024)

while l:
    c.send(l)
    print("Sent", repr(l))
    l = f.read(1024)
f.close()

print("File sent")
c.close()