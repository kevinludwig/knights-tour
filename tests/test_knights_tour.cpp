#define BOOST_TEST_MODULE TestKT
#include <boost/test/included/unit_test.hpp>
#include "../src/utils.h"
#include "../src/game_state.h"
#include "../src/unvisited_degree.h"
#include "../src/squares.h"

BOOST_AUTO_TEST_CASE(test_bit_num) {
    BOOST_CHECK_EQUAL(bit_num(1), 0);
    BOOST_CHECK_EQUAL(bit_num(2), 1);
    BOOST_CHECK_EQUAL(bit_num(4), 2);
    BOOST_CHECK_EQUAL(bit_num(1UL << 52), 52);
}

BOOST_AUTO_TEST_CASE(test_unvisited_degree) {
    const game_state gs = game_state(A1);
    
    BOOST_CHECK_EQUAL(unvisited_degree(gs)(A1, C1), true);
    BOOST_CHECK_EQUAL(unvisited_degree(gs)(E4, E1), false);
}

BOOST_AUTO_TEST_CASE(test_game_state_generate_moves) {
    BOOST_CHECK_EQUAL(game_state(E4).generate_moves().size(), 8);
    BOOST_CHECK_EQUAL(game_state(A1).generate_moves().size(), 2);
}
