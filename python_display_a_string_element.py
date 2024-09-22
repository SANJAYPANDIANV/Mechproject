class sample:
    def __init__(self):
        self.string = ""
        self.uppercase = 0
        self.lowercase = 0
        self.consonant = 0
        self.vowel = 0
        self.space = 0

        
    def getstr(self):
        self.string = str(input("Enter the name :"))

        
    def count(self):
        for ch in self.string:
            if (ch.isupper()):
                self.uppercase += 1
            if (ch.islower()):
                self.lowercase += 1
            if (ch.isspace()):
                self.space += 1
            if ch in ('AEIOUaeiou'):
                self.vowel += 1
            self.consonant = self.uppercase + self.lowercase - self.vowel

    def display(self):
        print("The given string contains ")
        print("Uppercase : " , self.uppercase)
        print("Lowercase : " , self.lowercase)
        print("Vowel : " , self.vowel)
        print("Space : " , self.space)
        print("Consonant : " , self.consonant)

sanjay = sample()
sanjay.getstr()
sanjay.count()
sanjay.display()
                 
