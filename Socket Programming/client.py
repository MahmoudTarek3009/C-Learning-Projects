import socket


HOST, PORT = "localhost", 8080

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

s.connect((HOST, PORT))
x=0
while(True):
    s.sendall(b"Hello from Client")
    recieved_data = s.recv(1024)
    print(f"Received {recieved_data!r}")
    send_data= input("Command: ")
    s.sendall(str(send_data))


