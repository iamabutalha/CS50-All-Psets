import csv


with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)

    counts = {}

    for row in reader:
        favorite = row["language"]
        if favorite in counts:
            counts[favorite] =+1
        else:
            counts[favorite] = 1


#for favorite in sorted(counts):
    #print(f"{favorite}: {counts[favorite]}")

#for favorite in sorted(counts, key=lambda language: counts[language], reverse=True):
  #  print(f"{favorite}: {counts[favorite]}")

favorite = input("Enter")
if favorite in counts:
    print(f"{favorite} :{counts[favorite]}")

