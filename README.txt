lab2

1.BMI.h(header file for class BMI)
  containing the prototype of member functions & data members(height,mass,value)

2.BMI.cpp(source-code file for class BMI)
  setHeight()(to record the value of height)
  getHeight()(to offer the value of height)
  setMass()(to record the value of mass)
  getMass()(to offer the value of mass)
  index()(to calculate the value of BMI)
    四捨五入到小數點後第2位
  category()(to see what category the BMI value belongs to)
    用if判斷範圍

3.main.cpp
  ifstream產生物件inFile,read the file "file.in"
  ofstream產生物件outFile,write the file "file.out"
  if files can't be opened((!inFile|!outFile)==1),cerr the message

  while(read in height & mass until encounter EOF)
    record height & mass
    get the value of BMI & the category, and then ouput to the file

4.Makefile
  compile main.cpp & BMI.cpp to be .o file
  link .o file with library to be executable
