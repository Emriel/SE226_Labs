import abc


class FileFrequency(abc.ABC):
    address = ""

    def __init__(self, address):
        self.address = address

    @abc.abstractmethod
    def calculateFreqs(self):
        pass


class ListCount(FileFrequency):
    def calculateFreqs(self):
        frequencies = []
        alphabet = []
        for i in range(97, 123):
            alphabet.append(chr(i))

        with open(self.address, 'r') as file:
            for alp in alphabet:
                freq = 0
                for line in file:
                    for char in line:
                        if alp == char:
                            freq = freq + 1
                frequencies.append(freq)
                file.seek(0)

        for i in range(len(alphabet)):
            print(alphabet[i] + " = " + str(frequencies[i]))


class DictCount(FileFrequency):
    def calculateFreqs(self):
        frequencies = []
        result = {}
        for i in range(97, 123):
            result[chr(i)] = 0

        with open(self.address, 'r') as file:
            for alp in result.keys():
                freq = 0
                for line in file:
                    for char in line:
                        if alp == char:
                            freq = freq + 1
                result.update({alp: freq})
                file.seek(0)

        for letter, frequency in result.items():
            print(f'"{letter}" {frequency}')




list_counter = ListCount("weirdWords.txt")
dict_counter = DictCount("weirdWords.txt")

print("List Frequencies:")
list_counter.calculateFreqs()

print("\nDictionary Frequencies:")
dict_counter.calculateFreqs()
