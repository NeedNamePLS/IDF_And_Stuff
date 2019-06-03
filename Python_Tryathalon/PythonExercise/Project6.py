minutes = float(input("Input an amount of minutes: "))
days = minutes / 1440
year = int(days / 365)
remainingDays = int(days % 365)
print(minutes, "minutes is approximately", year, "years and", remainingDays, "days")
