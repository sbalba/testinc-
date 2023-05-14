#include <iostream>

using namespace std;

// دالة للتحقق من رقم أولي أو لا

bool isPrime(int n) {

  // إذا كان الرقم أصغر من 2 فهو ليس أولي

  if (n < 2) {

    return false;

  }

  // إذا كان الرقم قابل للقسمة على 2 فهو ليس أولي

  if (n % 2 == 0) {

    return n == 2;

  }

  // إذا كان الرقم قابل للقسمة على أي عدد فردي من 3 إلى جذره فهو ليس أولي

  for (int i = 3; i * i <= n; i += 2) {

    if (n % i == 0) {

      return false;

    }

  }

  // إذا لم يتحقق أي من الشروط السابقة فالرقم أولي

  return true;

}

int main() {

  // قراءة رقم من المستخدم

  int n;

  cout << "أدخل رقما: ";

  cin >> n;

  

  // استدعاء الدالة وطباعة النتيجة

  if (isPrime(n)) {

    cout << n << " هو رقم أولي\n";

  } else {

    cout << n << " ليس رقم أولي\n";

  }

  

  return 0;

}

