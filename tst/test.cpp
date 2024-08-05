#include "gtest/gtest.h"
#include "../src/RWFile.hpp"
#include "../src/Dijkstra.hpp"
#include "../src/RWFile.cpp"
#include "../src/Dijkstra.cpp"
#include "../src/Graph.cpp"
#include "../src/Graph.hpp"

TEST(TestRoutes, TestName) {
	Graph graph(RWFile::ReadFile("input.txt"));
	std::string routeKT = Dijkstra::CalcRoute(graph, "Krasnoyarsk", "Toronto");
	std::string routeTO = Dijkstra::CalcRoute(graph, "Toronto", "Omsk");
	ASSERT_STREQ(routeKT.data(), "{Krasnoyarsk, Kiev, Omsk, Toronto} - 26");
	ASSERT_STREQ(routeTO.data(), "{Toronto, Krasnoyarsk, Kiev, Omsk} - 17");
}