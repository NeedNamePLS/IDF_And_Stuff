v0, v1, t = (input("Enter v0, v1, and t: ")).split(",")
v0, v1, t = [float(v0), float(v1), float(t)]
XLR8 = (v1 - v0) / t
print("The average acceleration is", XLR8)
