#

def main():
    KMS = float(input("Enter a number of kilometers: "))
    KM2M(KMS)

def KM2M(KM):
    miles = KM * 0.6214
    print(KM, "Kilometers is equal to", miles, "Miles")

main()
