cmake_minimum_required(VERSION 4.0)
project(esami_c__)

set(CMAKE_CXX_STANDARD 20)

add_executable(esami_c__ main.cpp)
add_executable(shift_left arrays/01_reverse_array.cpp)
add_executable(compact arrays/02_compact.cpp)
add_executable(swap arrays/03_swap.cpp)
add_executable(coincide arrays/04_coincide.cpp)
add_executable(shiftleft arrays/05_shiftleft.cpp)
add_executable(mostfrequent arrays/06_mostfrequent.cpp)
add_executable(palindrome arrays/07_palindrome.cpp)
add_executable(zerosubsequences arrays/08_getzerosubsequences.cpp)
add_executable(norepetitions arrays/09_norepetitions.cpp)
add_executable(longestwordlength strings/01_find_longest_word_length.cpp)
add_executable(reversestring strings/02_reversestring.cpp)
add_executable(rotate arrays/10_rotate.cpp)
add_executable(subtargetsum arrays/11_subsequencestargetsum.cpp)
add_executable(removedoublestring strings/04_removedoublestring.cpp)
add_executable(anagrams strings/05_anagrams.cpp
        "Object Oriented Programming/01_templates.cpp"
        "Object Oriented Programming/02_templates.cpp"
        "Object Oriented Programming/03_multiset.cpp"
        "Object Oriented Programming/Queue.cpp"
        "Object Oriented Programming/Insieme.cpp"
        "Object Oriented Programming/04_Map.cpp"
        datastructures/actualdatastructures/01_how_maps_work.cpp
        "Object Oriented Programming/05_Stack.cpp"
        "Object Oriented Programming/06_MultisetV2.cpp"
        "Object Oriented Programming/07_RuleOfThreePractice.cpp"
        "Object Oriented Programming/08_dynamicArrayStackPractice.cpp"
        "Object Oriented Programming/09_dynamicArrayMultiSetPractice.cpp"
        "Object Oriented Programming/10_MultisetV3.cpp"
        "Object Oriented Programming/11_ QueuePractice.cpp"
        exam_free_practice/firstone.cpp
        exam_free_practice/secondone.cpp
        exam_free_practice/palindroma.cpp
        exam_free_practice/palindroma.h
        exam_free_practice/palindroma2.cpp
        exam_free_practice/multiset1.cpp
        exam_free_practice/queueexam.cpp)
add_executable(heappractice strings/06_heappractice.cpp)
add_executable(heappractice2 strings/07_moreheappractice.cpp)
add_executable(countunique strings/08_countunique.cpp)
add_executable(revertpractice strings/09_revertpractice.cpp)
add_executable(dynamicallocation strings/11_dynamicallocation.cpp)
add_executable(dynamicallocation2 strings/12_dynamicallocation2.cpp)
add_executable(removeinvert strings/13_removeinvert.cpp)
add_executable(trim strings/14_trim.cpp)
add_executable(binarysearch algorithms/01_binarySearch.cpp)
add_executable(rotatelist datastructures/linkedlists/04_rotate.cpp)
add_executable(rotatebacklist datastructures/linkedlists/06_rotateback.cpp)
add_executable(greaterThanZeroList datastructures/linkedlists/07_greaterThanZero.cpp)
add_executable(sumlist datastructures/linkedlists/11_sumlist.cpp)
add_executable(multiset "Object Oriented Programming/06_MultisetV2.cpp")




