cmake_minimum_required(VERSION 3.9)

# 指定工程名称
project(HelloCTK)

# 指定为动态库
option(BUILD_SHARED_LIBS "Build CTK Plugin" ON)

# CTK 安装路径
set(CTK_INSTALL_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../../CTKInstall)

# 添加 CTK 相关的头文件搜索路径
include_directories(${CTK_INSTALL_PATH}/include/ctk-0.1)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../CTK-master/Libs/PluginFramework)

# 查找 CTK 相关的库文件
find_library(CORE_LIB CTKCore ${CTK_INSTALL_PATH}/lib/ctk-0.1 NO_DEFAULT_PATH)
find_library(FRAMWORK_LIB CTKPluginFramework ${CTK_INSTALL_PATH}/lib/ctk-0.1 NO_DEFAULT_PATH)
link_libraries(${CORE_LIB} ${FRAMWORK_LIB})

# 设置自动生成 moc 文件
set(CMAKE_AUTOMOC ON)

# 查找需要的 Qt 库文件
find_package(Qt5Core)

# 文件夹中的所有头文件、源文件
file(GLOB HEADER_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.h)
file(GLOB SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

# 添加资源文件
set(QRC_SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/Resource.qrc)
qt5_add_resources(QRC_FILES ${QRC_SOURCE_FILES})

# 生成库
add_library(${PROJECT_NAME} ${HEADER_FILES} ${SRC_FILES} ${QRC_FILES})

# 为 target 添加需要链接的库
target_link_libraries(${PROJECT_NAME} Qt5::Core)
