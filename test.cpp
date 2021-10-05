#include "circle.cpp"
#include "gtest/gtest.h"

TEST(Area, AreaIsCorrect){
	Circle circ;
	circ.set_radius(3);
	EXPECT_DOUBLE_EQ(circ.area(), 3 * 3 * M_PI);
	circ.set_radius(10);
	EXPECT_DOUBLE_EQ(circ.area(), 10 * 10 * M_PI);
	circ.set_radius(27);
	EXPECT_DOUBLE_EQ(circ.area(), 27 * 27 * M_PI);
}

TEST(PERIMITER, PerimiterIsCorrect){
	Circle circ;
	circ.set_radius(3);
	EXPECT_DOUBLE_EQ(circ.perimeter(), 2 * 3 * M_PI);
	ASSERT_NEAR(circ.perimeter(), 2 * 3 * 3.14159, 0.001);
	circ.set_radius(5);
	EXPECT_DOUBLE_EQ(circ.perimeter(), 2 * 5 * M_PI);
	ASSERT_NEAR(circ.perimeter(), 2 * 5 * 3.14159, 0.001);
	circ.set_radius(17);
	EXPECT_DOUBLE_EQ(circ.perimeter(), 2 * 17 * M_PI);
	ASSERT_NEAR(circ.perimeter(), 2 * 17 * 3.14159, 0.001);
}

TEST(RADIUS, RadiusIsValid){
	Circle circ;
	circ.set_radius(-3);
	ASSERT_EXIT(circ.set_radius(-3), ::testing::ExitedWithCode(-1), "Error: Negative Input");
}

int main(int ac, char* av[]){
	::testing::InitGoogleTest(&ac, av);
	return RUN_ALL_TESTS();
}
