# Advent-of-Code-2020
My submission for the `https://adventofcode.com/2020` challenge 

---
## Summary of challenges

These are the summary of the technical requirements. The actual challenge comes with a wonderful Christmas story.

- Day 1 (December 1) **Report Repair**
  Given a list of numbers, find the pair of number which gives the sum equal to `2020`. Return the product of the pair.
  Do the same thing, but now find three numbers with the sum `2020` and return its product.

- Day 2 (December 2) **Password Philosophy**

  _Part 1_ Given a delimited text file of passwords and password requirements, determine the number of passwords that meet the requirements.
  For example, an entry in the text file `13-16 k: kkkkkgmkbvkkrskhd` means that the password `kkkkkgmkbvkkrskhd` must contain exactly between `13` and `16` instances of the letter `k` for it to meet requirements.

  _Part 2_ Now, the same data files refer to the position of the letter. The letter must appear on **either** positions (but not both) for it to meet requirements. For example, the letter `k` must appear on the `13`th or `16`th position (but not both). In this case,     kkkkkgmkbvkk**r**sk**h**d    the 13th and 16th position are neither `k`, so it is invalid. Note that position `1` refers to the first letter of the password (not position 0).

  For each case, count the number of passwords that meet the requirements.
