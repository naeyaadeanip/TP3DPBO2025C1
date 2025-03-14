#NamaTim, JumlahTim

class Tim:
    __NamaTim = ""
    __JumlahTim = ""

    def __init__(self):
        self.NamaTim = ""
        self.JumlahTim = ""

    #setter
    def setNamaTim(self, nik):
        self.NamaTim = nik
    def setJumlahTim(self, nik):
        self.JumlahTim = nik

    #getter
    def getNamaTim(self):
        return self.NamaTim
    def getJumlahTim(self):
        return self.JumlahTim