message(${CMAKE_CURRENT_SOURCE_DIR})
add_custom_target(
        cpplint
        COMMAND
        cpplint --recursive --exclude=build/* --output=emacs . > ./lint/analyze.txt 2> ./lint/analyze.txt
        WORKING_DIRECTORY
        ${CMAKE_CURRENT_SOURCE_DIR}
        VERBATIM
)