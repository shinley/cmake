
# 指定头文件目录
INCLUDE_DIRECTORIES(/usr/local/include/hello)

# 生成可执行文件
ADD_EXECUTABLE(main main.cpp)

# 指定共享库目录  可以指定多个  
# 如果没有指定共享库目录，编译器会自动查找共享库目录  如果没有找到，编译器会报错  
TARGET_LINK_LIBRARIES(main hello)