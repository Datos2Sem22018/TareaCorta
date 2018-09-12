cmake_minimum_required(VERSION 3.12)
project(SistemaPizzas)

set(CMAKE_CXX_STANDARD 14)

add_executable(SistemaPizzas main.cpp Pizzas/pizzaPadre/pizzaPadre.cpp Pizzas/pizzaPadre/pizzaPadre.h Pizzas/pizzaS/pizzaS.cpp Pizzas/pizzaS/pizzaS.h Pizzas/pizzaV/pizzaV.cpp Pizzas/pizzaV/pizzaV.h Pizzas/pizzaH/pizzaH.cpp Pizzas/pizzaH/pizzaH.h Pizzas/pizzaJQ/pizzaJQ.cpp Pizzas/pizzaJQ/pizzaJQ.h)