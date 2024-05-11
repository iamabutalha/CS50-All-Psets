import csv

book = []


#Add book to shelf to read it
with open("book.csv") as file:
    file_reader = csv.DictReader(file)
    for book in file_reader:
        books.append(book)

#print 
