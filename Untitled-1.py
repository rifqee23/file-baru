def tambah(a, b):
    return a + b


def kurang(a, b):
    return a - b


def kali(a, b):
    return a * b


def bagi(a, b):
    return a / b


def menu():
    print(" KALKULATOR DUO")
    print('Pilih Menu (1 sd. 4) :')
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("X. Keluar")


while True:
    pilihan = ''
    while pilihan != 'X':
        menu()
        pilihan = input("Masukkan pilihan: ")
    while True:
        if pilihan == '1':
            a = int(input("Masukkan bilangan pertama: "))
            b = int(input("Masukkan bilangan kedua: "))
            hasil = tambah(a, b)
            print("Hasil: ", hasil)

        elif pilihan == '2':
            a = int(input("Masukkan bilangan pertama: "))
            b = int(input("Masukkan bilangan kedua: "))
            hasil = kurang(a, b)
            print("Hasil: ", hasil)

        elif pilihan == '3':
            a = int(input("Masukkan bilangan pertama: "))
            b = int(input("Masukkan bilangan kedua: "))
            hasil = kali(a, b)
            print("Hasil: ", hasil)

        elif pilihan == '4':
            a = int(input("Masukkan bilangan pertama: "))
            b = int(input("Masukkan bilangan kedua: "))
            hasil = bagi(a, b)
            print("Hasil: ", hasil)

        ulang = input("Anda ingin menghitung lagi? (Y/T): ")
        if ulang == 'Y':
            continue
        elif ulang == 'T':
            break
        elif pilihan == 'X':
            print('anda keluar')
        else:
            print("Pilihan tidak ada,coba lagi")
            continue
