if [ ! -d dist ]; then
    # echo "folder dist does not exist, create the folder"
    mkdir dist
fi

clear
clang++ easy/smallerNumbersThanCurrent.cpp -o dist/a.out
./dist/a.out