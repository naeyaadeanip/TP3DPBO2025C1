#NamaUnit, KodeUnit, KepalaUnit

from Tim import Tim

class UnitKerja:
    __NamaUnit = ""
    __KodeUnit = ""
    __KepalaUnit = ""
    __listTim = []

    def __init__(self):
        self.NamaUnit = ""
        self.KodeUnit = ""
        self.KepalaUnit = ""
        self.listTim = []

    #setter
    def setNamaUnit(self, nik):
        self.NamaUnit = nik
    def setKodeUnit(self, nik):
        self.KodeUnit = nik
    def setKepalaUnit(self, nik):
        self.KepalaUnit = nik
    def addTim(self, NamaTim, JumlahTim):
        temp = Tim()
        temp.setNamaTim(NamaTim)
        temp.setJumlahTim(JumlahTim)
        self.listTim.append(temp)

    #getter
    def getNamaUnit(self):
        return self.NamaUnit
    def getKodeUnit(self):
        return self.KodeUnit
    def getKepalaUnit(self):
        return self.KepalaUnit
    def getTim(self):
        return self.listTim