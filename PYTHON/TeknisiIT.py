#Keahlian, SistemYgDikelola

from Manusia import Manusia
from Tendik import Tendik

class TeknisiIT(Tendik):
    __Keahlian = ""
    __Sistem = ""

    def __init__(self):
        super(TeknisiIT, self).__init__()
        self.Keahlian = ""
        self.Sistem = ""

    #setter
    def setKeahlian(self, nik):
        self.Keahlian = nik
    def setSistem(self, nik):
        self.Sistem = nik

    #getter
    def getKeahlian(self):
        return self.Keahlian
    def getSistem(self):
        return self.Sistem