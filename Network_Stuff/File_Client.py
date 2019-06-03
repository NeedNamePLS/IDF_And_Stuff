#File Client Transfer

import socket                   # Import socket module

s = socket.socket()             # Create a socket object
host = socket.gethostname()     # Get local machine name
port = 60000                    #

s.connect((host, port))
s.send("[Welcome]")

with open("Help_Wanted.txt", "wb") as f:
    while True:
        print("Recieving...")
        data = s.recv(1024)
        if not data:
            break
        f.write(data)
f.close()
print("File recieved")
s.close()