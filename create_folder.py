import os

folder_list = ['bgm', 'config', 'fonts', 'headers', 'img', 'levels', 'sfx', 'src']
file_list = ['.clang-format', 'CMakeLists.txt']

def create_folder_and_files(folders, files):
    for f in folders:
        folder_name = f
        if not os.path.exists(folder_name):
            os.makedirs(folder_name)
        else:
            pass
    
    for fl in files:
        file_name = fl
        with open(file_name, 'w') as file:
            file.close()


if __name__ == '__main__':
    create_folder_and_files(folder_list, file_list)
