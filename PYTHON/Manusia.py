#NIK, Nama, JenisKelamin

class Manusia:
    __NIK = ""
    __Nama = ""
    __JenisKelamin = ""

    def __init__(self):
        self.NIK = ""
        self.Nama = ""
        self.JenisKelamin = ""

    #setter
    def setNIK(self, nik):
        self.NIK = nik
    def setNama(self, nik):
        self.Nama = nik
    def setJenisKelamin(self, nik):
        self.JenisKelamin = nik

    #getter
    def getNIK(self):
        return self.NIK
    def getNama(self):
        return self.Nama
    def getJenisKelamin(self):
        return self.JenisKelamin