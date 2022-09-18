include(Nlohmann)

add_library(GeometryReader src/GeometryReader.cc)
target_include_directories(GeometryReader PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include> $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}/geometry-reader>)
target_link_libraries(GeometryReader PRIVATE nlohmann_json::nlohmann_json)
