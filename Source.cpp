#include<iostream>
using namespace std;

struct collatzNode {
	int item;
	collatzNode* link;
};

int main() {
	int userNum;
	int collatzTerm = 0;
	int numWithLongestChain = 0;
	int sequenceNum = 0;
	int numOfTerms;
	collatzNode userNode;

	cout << "Enter an integer 100 or less: ";
	cin >> userNum;

	for (int i = collatzTerm; i <= userNum; i++) {
		sequenceNum = i;
		numOfTerms = 1;

		while (sequenceNum > 1) {
			if (sequenceNum % 2 == 0)
				sequenceNum = sequenceNum / 2;
			else
				sequenceNum = (sequenceNum * 3) + 1;

			numOfTerms += 1;
		}

		if (sequenceNum > numWithLongestChain)
			numWithLongestChain = sequenceNum;
	}

	userNode.item = numWithLongestChain;
	collatzNode newNode;
	int newNum = userNode.item;

	newNode.item = newNodeNum(userNode.item);
	userNode.link = &newNode;
	userNode = newNode;
	newNode.link = nullptr;

	return 0;
}

int newNodeNum(int sequenceNum) {

	if (sequenceNum > 1) {
		if (sequenceNum % 2 == 0)
			sequenceNum = sequenceNum / 2;
		else
			sequenceNum = (sequenceNum * 3) + 1;
	}
	else {
		sequenceNum = 1;
	}

	return sequenceNum;
}