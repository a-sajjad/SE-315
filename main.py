# Encryption....
plaintext = input("Enter the text you want to encrypt: ")
key = int(input("Enter your key: "))
plaintext = ''.join(plaintext.split(' '))  # in order to remove the spaces between the words

ciphertext = [''] * key

for column in range(key):
    index = column

    while index < len(plaintext):
        ciphertext[column] += plaintext[index]

        index += key

print(''.join(ciphertext))

# Decryption....

cipher = input("Enter your cipher text to decrypt: ")
cipher = ''.join(cipher.split(' '))

keyD = int(input("Enter the key for decryption: "))
rows = int(len(cipher) / keyD)
plain = [''] * rows

for row in range(rows):
    count = row
    while count < len(cipher):
        plain[row] += cipher[count]
        count += rows

print(''.join(plain))
