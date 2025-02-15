cmake_minimum_required(VERSION 3.13)

project(TaflGame
  VERSION 1.0
  DESCRIPTION "Tafl console game"
  LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Если не указано, ставим Debug-сборку
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

# Указываем путь к Qt6 (исправь, если у тебя другой)
set(CMAKE_PREFIX_PATH "D:/Qty/6.8.1/msvc2022_64/lib/cmake")

# Подключаем Qt6 Widgets
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Собираем все .cpp файлы
file(GLOB SOURCES "*.cpp")

# Создаём исполняемый файл
add_executable(TaflGame ${SOURCES})

# Указываем пути к заголовочным файлам
target_include_directories(TaflGame PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Линкуем Qt-библиотеки
target_link_libraries(TaflGame PRIVATE Qt6::Widgets)

# Оптимизация для Release-сборки
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDEBUG")
