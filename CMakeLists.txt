cmake_minimum_required(VERSION 3.10)
project(datastructure C)

set(CMAKE_C_STANDARD 99)

#head file path，头文件目录
include_directories(header)

#source directory，源文件目录
aux_source_directory(src DIR_SRCS)

#set environment variable，设置环境变量，编译用到的源文件全部都要放到这里，否则编译能够通过，但是执行的时候会出现各种问题，比如"symbol lookup error xxxxx , undefined symbol"
set(TEST_MATH ${DIR_SRCS} header/seqList.h src/seqList.c)

#add executable file，添加要编译的可执行文件
add_executable(${PROJECT_NAME} ${TEST_MATH} src/seqList.c)

#add_executable(datastructure src/main.c)