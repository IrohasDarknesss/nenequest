import os

file_list = ['cmdChest', 'cmdBridge', 'cmdScroll', 'cmdStart', 'cmdWeapon']

def create_files(files):
    for fl in files:
        file_name = fl+'.hpp'
        with open(file_name, 'w') as file:
            file.close()


if __name__ == '__main__':
    create_files(file_list)
