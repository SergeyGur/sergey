BUILD_FOLDER=build_ninja

mkdir -p $BUILD_FOLDER

cd $BUILD_FOLDER

cmake -G Ninja ../project
cmake --build .

ctest 
