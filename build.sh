sudo pacman -S --needed extra-cmake-modules kf6

cd ./wallfractal
cmake -DCMAKE_INSTALL_PREFIX=/usr 
make 
make install

kquitapp plasmashell
plasmashell
