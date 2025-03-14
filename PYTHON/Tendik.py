#NIP, Jabatan, UnitKerja

from Manusia import Manusia
from UnitKerja import UnitKerja

class Tendik(Manusia):
    __NIP = ""
    __Jabatan = ""
    __Unit = UnitKerja()

    def __init__(self):
        super(Tendik, self).__init__()
        self.NIP = ""
        self.Jabatan = ""
        self.Unit = UnitKerja()

    #setter
    def setNIP(self, nik):
        self.NIP = nik
    def setJabatan(self, nik):
        self.Jabatan = nik
    def setUnitKerja(self, nik):
        self.Unit = nik

    #getter
    def getNIP(self):
        return self.NIP
    def getJabatan(self):
        return self.Jabatan
    def getUnit(self):
        return self.Unit