#include<string>

using std::string;

class simChecker {
public:
	int lengthCheck(string user) {
		int ansLen = Ans.length();
		int userLen = user.length();

		int shortLen = ansLen > userLen ? userLen : ansLen;

		int diff = std::abs(ansLen - userLen);

		if (diff >= 20)
			return 0;

		if (diff == 0)
			return 60;

		return (1-(diff/(float)shortLen))*60;
	}


	void setAns(string ans) {
		Ans = ans;
	}
	string getAns()
	{
		return Ans;
	}

private:
	string Ans;
};