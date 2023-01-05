import std/[os, parseopt]
import strutils

let
 b = parseInt initOptParser(quoteShellCommand(commandLineParams())).cmdLineRest()
 total = int((b * b) / 2 + ( b + 1) / 2)

var neededNumbers = newSeq[array[2, int]]()

for i in countup(1,b):
  for j in countup(1,b):
    if i == j:
      continue
    if i * j == total - (i + j):
      neededNumbers.add([i, j])

echo neededNumbers
