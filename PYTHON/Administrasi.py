#Bagian, Tugas

from Manusia import Manusia
from Tendik import Tendik

class Administrasi(Tendik):
    __Bagian = ""
    __Tugas = ""

    def __init__(self):
        super(Administrasi, self).__init__()
        self.Bagian = ""
        self.Tugas = ""

    #setter
    def setBagian(self, nik):
        self.Bagian = nik
    def setTugas(self, nik):
        self.Tugas = nik

    #getter
    def getBagian(self):
        return self.Bagian
    def getTugas(self):
        return self.Tugas