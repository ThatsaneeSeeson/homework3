#include <iostream>
using namespace std;
int main()
{
  float first,second,third,midterm,final,total;
  cout << "===========QUIZZES============" << endl;
  cout << "Enter first quizz (10) : ";
  cin >> first;
  cout << "Enter second quizz (10) : ";
  cin >> second;
  cout << "Enter third quizz (10) : ";
  cin >> third;
  cout << "===========MID-TERM===========" << endl;
  cout << "Enter mid-term (40) : ";
  cin >> midterm;
  cout << "===========FINAL===========" << endl;
  cout << "Enter final (50) : ";
  cin >> final;

  cout << "Quizz Total : " << ((first+second+third)/3) << endl;
  cout << "Mid term : " << midterm << endl;
  cout << "Final : " << final << endl;
  cout << "Total : " << ((first+second+third)/3)+midterm+final << endl;
  total = ((first+second+third)/3)+midterm+final;
  cout << "Your score is" << (total >= 50 ? "PASS" : "FALL") << endl;

return 0;
}