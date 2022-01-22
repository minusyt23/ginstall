cmake_minimum_required(VERSION 3.20)

project(ginstall)

# Include GTK4
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK4 REQUIRED gtk4)

include_directories(${GTK4_INCLUDE_DIRS})
link_directories(${GTK4_LIBRARY_DIRS})

add_definitions(${GTK4_CFLAGS_OTHER})


# Bad idea but generally works
file(GLOB ginstall_code CONFIGURE_DEPENDS "*.h" "*.c")

add_executable(ginstall ${ginstall_code})

# Link GTK4
target_link_libraries(ginstall ${GTK4_LIBRARIES})
