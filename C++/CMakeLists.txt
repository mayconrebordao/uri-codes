#instruções para compilar o executável
add_executable( 1866 1866.cpp )
 add_executable( 1142 1142.cpp )
 add_executable( 2029 2029.cpp )
 add_executable( 1114 1114.cpp )
 add_executable( 1963 1963.cpp )
 add_executable( 2003 2003.cpp )
 add_executable( 2006 2006.cpp )
 add_executable( 1143 1143.cpp )
 add_executable( 1113 1113.cpp )
 #add_executable( 1534 1534.cpp )
 add_executable( 1589 1589.cpp )
 add_executable( 2028 2028.cpp )
 add_executable( 2059 2059.cpp )
 add_executable( 1134 1134.cpp )

 target_link_libraries(1866 m)
 target_link_libraries(1142 m)
 target_link_libraries(2029 m)
 target_link_libraries(1114 m)
 target_link_libraries(1963 m)
 target_link_libraries(2003 m)
 target_link_libraries(2006 m)
 target_link_libraries(1143 m)
 target_link_libraries(1113 m)
 #target_link_libraries(1534 m)
 target_link_libraries(1589 m)
 target_link_libraries(2028 m)
 target_link_libraries(2059 m)
 target_link_libraries(1134 m)

#instruções para compilar o executável
# add_executable(projeto2_2 maycon_2.c)
#indica quais bibliotecas devemos ligar com o executável
# target_link_libraries()
#instala o executável na pasta bin
install (TARGETS 1866
 1142
 2029
 1114
 1963
 2003
 2006
 1143
 1113
 #1534
 1589
 2028
 2059
 1134 RUNTIME DESTINATION ${CMAKE_SOURCE_DIR}/bin/cpp/)

#instala o executável na pasta bin
# install (TARGETS projeto2_2 RUNTIME DESTINATION ${CMAKE_SOURCE_DIR}/bin)
