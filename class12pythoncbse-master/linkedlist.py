class linkedl:
    def __init__(self):
        self.l=[]
    def insbeg(self):
        element=int(raw_input("Enter element: "))
        self.l=[element]+self.l
    def insk(self):
        element=int(raw_input("Enter element: "))
        k=int(raw_input("Enter position: "))
        if(k<=len(self.l)+1):
            self.l=self.l[:k]+[element]+self.l[k:]
    def insrea(self):
        element=int(raw_input("Enter element: "))
        self.l=self.l+[element]
    def delbeg(self):
        self.l=self.l[1:]
    def delk(self):
        k=int(raw_input("Enter position: "))
        self.l=self.l[:k]+self.l[k+1:]
    def delrea(self):
        self.l=self.l[:-2]
