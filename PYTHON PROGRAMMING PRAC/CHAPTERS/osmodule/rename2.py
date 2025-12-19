import os

files = os.listdir("osmodule/files")
i=0
for file in files:
    os.rename(f"osmodule/files/{file}",f"osmodule/files/{i}.png")
    i = i + 1   