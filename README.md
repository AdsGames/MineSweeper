# MineSweeper

A remake of the classic windows game "Minesweeper". Clear the board of mines by marking each one to ensure that the area is safe.

## Demo

[Web Demo](https://adsgames.github.io/MineSweeper/)

## Setup

### Windows (MSYS2)

```bash
pacman -S mingw-w64-i686-gcc-libs mingw-w64-i686-SDL2 mingw-w64-i686-SDL2_mixer mingw-w64-i686-SDL2_image mingw-w64-i686-SDL2_ttf mingw-w64-i686-SDL2_gfx
```

### Mac OS

```bash
brew install sdl2 sdl2_image sdl2_gfx sdl2_ttf sdl2_mixer
```

### Linux

```bash
sudo apt install libsdl2-dev libsdl2-image-dev libsdl2-ttf-dev libsdl2-mixer-dev libsdl2-gfx-dev
```

### Build

```bash
cmake .
make
```

### Build Emscripten

```bash
emcmake cmake .
make
```
