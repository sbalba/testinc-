#include <iostream>

#include <cmath>

using namespace std;

// دالة للتحقق من رقم أولي أو لا

bool isPrime(int n) {

  // إذا كان الرقم أصغر من 2 أو قابل للقسمة على 2 فهو ليس أولي

  if (n < 2 || n % 2 == 0) return n == 2;

  // إذا كان الرقم قابل للقسمة على أي عدد فردي من 3 إلى جذره فهو ليس أولي

  for (int i = 3; i <= sqrt(n); i += 2) if (n % i == 0) return false;

  // إذا لم يتحقق أي من الشروط السابقة فالرقم أولي

  return true;

}

int main() {

  // قراءة رقم من المستخدم وطباعة النتيجة

  int n; cin >> n; cout << n << (isPrime(n) ? " هو رقم أولي\n" : " ليس رقم أولي\n");

  

  return 0;

}

