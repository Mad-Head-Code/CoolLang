@echo off
cd %1
cool-cpp %2 %2.cpp
g++ %2.cpp -o %3.exe