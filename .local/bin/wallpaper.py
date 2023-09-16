import os
import sys
import random

CORRECT_EXTENSIONS = {'.jpg', '.png'}

def get_random_wallpaper():
    wallpaper_dir = os.path.join(os.path.expanduser('~'), "Pictures", "Wallpaper")
    picture_files = [file for file in os.listdir(wallpaper_dir) if file.endswith(tuple(CORRECT_EXTENSIONS))]
    return os.path.join(wallpaper_dir, random.choice(picture_files))

def set_wallpaper(wallpaper_path):
    os.system(f'swaybg -i {wallpaper_path} > /dev/null 2>&1 &')
    os.system(f'wal -qi {wallpaper_path}')

def main():
    if len(sys.argv) == 1:
        new_wallpaper = get_random_wallpaper()
    elif len(sys.argv) == 2:
        input_wallpaper = sys.argv[1]
        if input_wallpaper.endswith(tuple(CORRECT_EXTENSIONS)):
            new_wallpaper = input_wallpaper
        else:
            raise Exception("Not a valid format")
    else:
        raise Exception("Program only accepts 1 photo as an argument")

    set_wallpaper(new_wallpaper)

if __name__ == "__main__":
    main()
