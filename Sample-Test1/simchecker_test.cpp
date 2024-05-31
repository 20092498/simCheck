#include "pch.h"
#include "../Project16/same.cpp"
#include <string>
#include <vector>

using std::vector;
using std::string;

class simCheckerFixture :public testing::Test {
public:
	simChecker sim;
	string ans = "BBCCDD";
};


TEST_F(simCheckerFixture, setAns) {
	sim.setAns(ans);
	string exp = sim.getAns();

	EXPECT_EQ(ans, exp);
}

TEST_F(simCheckerFixture, smaeLenTest) {
	string user = "ABCDEF";
	sim.setAns(ans);
	int ret = sim.lengthCheck(user);

	EXPECT_EQ(ret, 60);
}

TEST_F(simCheckerFixture, UserShortdiffLenTest) {
	string user = "ABCD";
	sim.setAns(ans);
	int ret = sim.lengthCheck(user);

	EXPECT_EQ(ret, 30);
}

TEST_F(simCheckerFixture, AnsShortdiffLenTest) {
	string user = "ABCDEFGH";
	sim.setAns(ans);
	int ret = sim.lengthCheck(user);

	EXPECT_EQ(ret, 39);
}

TEST_F(simCheckerFixture, TooLongdiffLenTest) {
	string user = "ABCDEFGHAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	sim.setAns(ans);
	int ret = sim.lengthCheck(user);

	EXPECT_EQ(ret, 0);
}