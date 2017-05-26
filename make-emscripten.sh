#!/bin/bash

rm -rf emscripten/*
mkdir -p emscripten

# ln -s data emscripten/files/data
# ln -s doc emscripten/files/doc
# ln -s dogfights emscripten/files/dogfights
# ln -s graphics emscripten/files/graphics
# ln -s missions emscripten/files/missions
# ln -s music emscripten/files/music
# ln -s sounds emscripten/files/sounds

emcc -D "PB_FIELD_16BIT=1" \
    -Isrc/ \
    -Isrc/cdogs/ \
    -Isrc/cdogs/proto/nanopb/ \
    -Isrc/cdogs/enet/include/ \
    -Isrc/cdogs/include/ \
    -Isrc/tests/ \
    src/*.c \
    $(find src/cdogs/ -name "*.c") \
    src/json/*.c \
    -O3 \
    -s ASSERTIONS=1 \
    -s ALLOW_MEMORY_GROWTH=1 \
    -s USE_SDL=2 \
    -s USE_SDL_IMAGE=2 \
    -s SDL2_IMAGE_FORMATS='["png"]' \
    --preload-file data \
    --preload-file doc \
    --preload-file dogfights \
    --preload-file graphics \
    --preload-file missions \
    --preload-file music \
    --preload-file sounds \
    -o emscripten/index.html

# for i in emscripten/files/*; do
#     unlink "$i"
# done
# rmdir emscripten/files
