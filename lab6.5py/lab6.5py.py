def commonElements(intList1, intList2):
    list3 = []
    for x in intList1:
        if x in intList2:
            list3.append(x)
    return list3
def palindromeStrings(stringList):
    palindromeResult = []
    for s in stringList:
        if s == s[::-1]:
            palindromeResult.append(s)
    return palindromeResult
def sieveOfEratosthenes(intList):
    maxNum = max(intList)
    sieve = list(range(2, maxNum+1))

    for i in sieve:
        for j in sieve:
            if j > i and j % i == 0:
                sieve.remove(j)
    result = [num for num in intList if num in sieve]
    return result
def anagrams(word, word_list):
    anagramList = []
    sortedWord = sorted(word.lower().replace(" ", ""))

    for w in word_list:
        sortedW = sorted(w.lower().replace(" ", ""))
        if sortedW == sortedWord:
            anagramList.append(w)
    return anagramList

exIntList = [1, 2, 3, 4, 5, 6]
exIntList2 = [2, 4, 6, 8, 10]
exStringList = ["enlist", "google", "rotator", "inlets", "deed", "banana", "deified"]
print(commonElements(exIntList, exIntList2))
print(palindromeStrings(exStringList))
print(sieveOfEratosthenes(exIntList))
print(sieveOfEratosthenes(exIntList2))
print(anagrams("listen", exStringList))
