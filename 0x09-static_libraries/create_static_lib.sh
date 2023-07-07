#!/bin/bash

#!/bin/bash

for file in *.c; do
    if [ -f "$file" ]; then
        filename="${file%.*}"
        gcc -c -o "$filename.o" "$file"
    fi
done

ar cr liball.a ./*.o
