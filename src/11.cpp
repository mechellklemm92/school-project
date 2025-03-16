
class MathGame {
private:
int maxNumber;
int minNumber;
string operation;

public:
MathGame(int _maxNumber, int _minNumber, string _operation) {
this->maxNumber = _maxNumber;
this->minNumber = _minNumber;
this->operation = _operation;
}

bool play() {
// Your code here
return true;
}
};