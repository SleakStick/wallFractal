sudo pacman -S --needed extra-cmake-modules kf6

mkdir -p ./wallFractal/build
cd ./wallFractal/build/
cmake .. -DCMAKE_INSTALL_PREFIX=/usr 
make 
sudo make install 

kquitapp6 plasmashell
plasmashell &

