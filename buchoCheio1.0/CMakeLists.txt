cmake_minimum_required(VERSION 3.22)
project(buchoCheio1_0)

set(CMAKE_CXX_STANDARD 14)

add_executable(buchoCheio1_0 main.cpp Cliente.cpp Cliente.hpp Endereco.cpp Endereco.hpp Pedido.cpp Pedido.hpp Produto.cpp Produto.hpp)
