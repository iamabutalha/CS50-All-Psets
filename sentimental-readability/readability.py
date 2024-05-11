
import re
from cs50 import get_string

letter = 0
word = 1
sentence_count = 0



text = get_string("Sentence : ")

for c in range(len(text)):
    if text[c].isalpha():
        letter += 1
    elif text[c].isspace():
        word += 1
    elif text[c] == '!' or text[c] == '.' or text[c] == '?':
        sentence_count = sentence_count + 1
       # print(letter)





avg_letters_per_word = letter / word
L = avg_letters_per_word * 100

avg_sentences_per_word = sentence_count / word
S = avg_sentences_per_word * 100


index = 0.0588 * L - 0.296 * S - 15.8
index = round(index)
if index > 16:
    print("Grade 16+")
elif index > 1 and index < 17:
    print(f"Grade {index}")
else:
    print("Before Grade 1")

